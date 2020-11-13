#!/usr/bin/env bash

CYAN='\033[0;36m'
NC='\033[0m'

function clean
{
	rm -rf infer-out/ *.o *.class
	echo
}

function failed
{
	printf "\n${CYAN}${1}${NC}\n"
	clean
}

base_dir=$(pwd)

for dir in */; do
	cd "${base_dir}/${dir}"

	file=$(find . -type f \( -name "*.c" -o -name "*.cpp" -o -name "*.java" \) -maxdepth 1 | head -n 1)
	if [[ "${file}" ]]; then
		if [[ "${file}" == *.c || "${file}" == *.cpp ]]; then
			infer capture -- gcc -c "${file}"
		elif [[ "${file}" == *.java ]]; then
			infer capture -- javac "${file}"
		fi
		if [[ "${?}" -ne 0 ]]; then
			failed "In '${dir}' 'infer caputre' failed."
			continue
		fi

		atomic_sets=0
		if [[ -f "infer-atomicity-out/atomic-sets" ]]; then
			infer analyze --atomic-sets-only
			if [[ "${?}" -ne 0 ]]; then
				failed "In '${dir}' 'infer analyze --atomic-sets-only' failed."
				continue
			fi
			atomic_sets=1

			diff=$(git diff --name-only infer-atomicity-out/atomic-sets)
			if [[ "${diff}" ]]; then
				echo
				git diff infer-atomicity-out/atomic-sets
				failed "In '${dir}' 'infer-atomicity-out/atomic-sets' differs."
			fi
		fi

		if [[ -f "report.txt" ]]; then
			if [[ "${atomic_sets}" -eq 0 ]]; then
				infer analyze --atomic-sets-only
				if [[ "${?}" -ne 0 ]]; then
					failed "In '${dir}' 'infer analyze --atomic-sets-only' failed."
					continue
				fi
				atomic_sets=1
			fi

			infer analyze --atomicity-violations-only
			if [[ "${?}" -ne 0 ]]; then
				failed "In '${dir}' 'infer analyze --atomicity-violations-only' failed."
				continue
			fi

			diff=$(diff -q infer-out/report.txt report.txt)
			if [[ "${diff}" ]]; then
				echo
				diff -u infer-out/report.txt report.txt
				failed "In '${dir}' 'infer-out/report.txt' and 'report.txt' differs."
			fi
		fi

		clean
	fi
done
