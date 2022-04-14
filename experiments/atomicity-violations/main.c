// Author: Dominik Harmim <iharmim@fit.vut.cz>

#include <stdlib.h>
#include <pthread.h>


pthread_mutex_t lock;


void f1(void) {}
void f2(void) {}
void f3(void) {}
void f4(void) {}
void g(void) {}
// (f1, f4); (f3, f1); warning (f1, f4); warning (f3, f1)
void ff(void) { f3(); f1(); f4(); }


void atomic_sequences(void)
{
	pthread_mutex_lock(&lock); // {f1, f2, f3}
	f1(); f2(); f3();
	pthread_mutex_unlock(&lock);

	g();

	pthread_mutex_lock(&lock); // {f2, f4}
	f4(); f2();
	pthread_mutex_unlock(&lock);

	g();

	pthread_mutex_lock(&lock); // {f1, f3}
	f1(); f3();
	pthread_mutex_unlock(&lock);

	g();

	pthread_mutex_lock(&lock); // {f1, f3, f4, ff}
	ff(); f3();
	pthread_mutex_unlock(&lock);
}


void test1(void)
{
	f1(); f2(); g(); // (f1, f2)

	f1(); g(); f2(); g();

	f1(); f1(); f2(); g(); // (f1, f2)

	f1(); f2(); f3(); g(); // (f1, f2); (f2, f3)

	f1(); g(); f2(); g(); f3();
}


void test2(void)
{
	f4(); f2(); g(); // (f4, f2)

	f2(); f4(); g(); // (f2, f4)

	f4();
	pthread_mutex_lock(&lock);
	pthread_mutex_unlock(&lock);
	f2(); // (f4, f2)
	g();

	f3(); f4(); // (f3, f4)
}


void test_only_lock(void)
{
	pthread_mutex_lock(&lock); // {f1, f2}
	f1(); f2();
}


void test_only_unlock(void)
{
	f1(); f2(); // (f1, f2)
	pthread_mutex_unlock(&lock);
}


void test_iteration(void)
{
	int c;

	while (c > 0)
	{
		f1(); f2(); // (f1, f2); (f2, f1)
	}

	f1(); // (f2, f1)
	while (c > 0) f2(); // (f1, f2)
	f3(); // (f1, f3); (f2, f3)

	for (; c > 0; f1()) f3(); // (f3, f1); (f1, f3)

	g();

	pthread_mutex_lock(&lock); // {f1, f2}; {f1, f2, f3}
	f1(); f2();
	while (c > 0)
	{
		f2(); f3();
	}
	pthread_mutex_unlock(&lock);
}


void test_selection(void)
{
	int c;

	f1();
	if (c > 0) f2(); // (f1, f2)
	else f3(); // (f1, f3)
	f3(); // (f2, f3)

	g();

	f4();
	if (c > 42) f4();
	else if (c > 0) f2(); // (f4, f2)
	f2(); // (f4, f2)
}


void test_nested(void)
{
	pthread_mutex_lock(&lock); // {f1, f3, f4, ff}
	ff();
	pthread_mutex_unlock(&lock);

	ff(); // (f4, ff); (ff, f3)

	g();

	ff(); f2(); // (f4, f2); (ff, f3)
}


int main(void)
{
	if (pthread_mutex_init(&lock, NULL)) return 1;

	atomic_sequences();

	test1();
	test2();
	test_only_lock();
	test_only_unlock();
	test_iteration();
	test_selection();
	test_nested();

	pthread_mutex_destroy(&lock);

	return 0;
}
