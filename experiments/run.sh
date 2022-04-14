#!/usr/bin/env bash

# Author: Dominik Harmim <iharmim@fit.vut.cz>

CYAN='\033[0;36m'
NC='\033[0m'

function clean { rm -rf infer-out *.o *.class *.ast.sh atomic-sets; }
function fail { printf "\n${CYAN}${1}${NC}\n"; clean; exit 1; }
function jsort { jq -S --argfile x "${1}" -n '$x | (.. | arrays) |= sort'; }

base_dir=$(pwd)

for dir in $(dirname "${0}")/*/; do
  cd "${base_dir}/${dir}"

  file=$(find . -maxdepth 1 -type f \
    \( -name '*.c' -o -name '*.cpp' -o -name '*.java' \) | head -n 1)
  if [[ ! "${file}" ]]; then continue; fi

  printf "${CYAN}---------- Analysing '${dir}' ----------${NC}\n\n"

  if [[ "${file}" == *.c || "${file}" == *.cpp ]]; then
    infer capture -- gcc -c "${file}"
  elif [[ "${file}" == *.java ]]; then
    infer capture -- javac "${file}"
  fi
  if [[ ${?} -ne 0 ]]; then
    fail "In '${dir}', 'infer caputre' failed."
  fi

  atomic_sets=0
  if [[ -f atomic-sets-exp ]]; then
    infer analyze --atomic-sets-only
    if [[ ${?} -ne 0 ]]; then
      fail "In '${dir}', 'infer analyze --atomic-sets-only' failed."
    fi
    atomic_sets=1

    diff=$(diff -q <(sort atomic-sets) <(sort atomic-sets-exp))
    if [[ "${diff}" ]]; then
      echo; diff -u <(sort atomic-sets) <(sort atomic-sets-exp)
      fail "In '${dir}', 'atomic-sets' and 'atomic-sets-exp' differ."
    fi
  fi

  if [[ -f report.json ]]; then
    if [[ ${atomic_sets} -eq 0 ]]; then
      infer analyze --atomic-sets-only
      if [[ ${?} -ne 0 ]]; then
        fail "In '${dir}', 'infer analyze --atomic-sets-only' failed."
      fi
      atomic_sets=1
    fi

    infer analyze --atomicity-violations-only
    if [[ ${?} -ne 0 ]]; then
      fail "In '${dir}', 'infer analyze --atomicity-violations-only' failed."
    fi

    diff=$(diff -q <(jsort infer-out/report.json) <(jsort report.json))
    if [[ "${diff}" ]]; then
      echo; diff -u <(jsort infer-out/report.json) <(jsort report.json)
      fail "In '${dir}', 'infer-out/report.json' and 'report.json' differ."
    fi
  fi

  clean; echo
done
