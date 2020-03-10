#include <stdlib.h>
#include <pthread.h>


pthread_mutex_t lock;


void f1(void) {}
void f2(void) {}
void f3(void) {}
void f4(void) {}
void f5(void) {}
void ff(void) { f1(); f2(); }


void test1(void)
{
	f1(); f1();

	pthread_mutex_lock(&lock); // {f1, f2}
	{
		f1(); f1(); f2();
	}
	pthread_mutex_unlock(&lock);

	f1(); f1();

	pthread_mutex_lock(&lock); // {f1, f3}
	{
		f1(); f3();
	}
	pthread_mutex_unlock(&lock);

	f1();

	pthread_mutex_lock(&lock); // {f1, f3}
	{
		f1(); f3(); f3();
	}
	pthread_mutex_unlock(&lock);
}


void test2(void)
{
	f1(); f1();

	pthread_mutex_lock(&lock); // {f1, f2}
	{
		f1(); f1(); f2();
	}
	pthread_mutex_unlock(&lock);

	f3(); f3();

	pthread_mutex_lock(&lock); // {f1, f4}
	{
		f1(); f4(); f4();
	}
	pthread_mutex_unlock(&lock);
}


void test_only_lock(void)
{
	pthread_mutex_lock(&lock); // {f1}
	f1();
}


void test_only_unlock(void)
{
	f2();
	pthread_mutex_unlock(&lock);
}


void test_iteration(void)
{
	int c;

	f1(); f2();

	while (c > 0)
	{
		f3(); f5();
	}

	pthread_mutex_lock(&lock); // {f1, f2}
	{
		f1(); f2();
	}
	pthread_mutex_unlock(&lock);

	pthread_mutex_lock(&lock); // {f3}
	{
		while (c > 0)
		{
			f3();
		}
	}
	pthread_mutex_unlock(&lock);

	f4();
}


void test_selection(void)
{
	int c;

	f1(); f2();

	if (c > 0)
	{
		f3(); f5();
	}
	else
	{
		pthread_mutex_lock(&lock); // {f1}
		f1();
		pthread_mutex_unlock(&lock);
	}

	pthread_mutex_lock(&lock); // {f2}; {f2, f3}; {f2, f4}
	{
		f2();

		if (c > 42)
		{
			f3();
		}
		else if (c > 0)
		{
			f4();
		}
	}
	pthread_mutex_unlock(&lock);

	f4();
}


void test_nested(void)
{
	pthread_mutex_lock(&lock); // {f1, f2, f3, ff}
	{
		ff(); f3();
	}
	pthread_mutex_unlock(&lock);

	pthread_mutex_lock(&lock); // {f1, f2, f4, f5, ff}
	{
		f4(); f5(); ff();
	}
	pthread_mutex_unlock(&lock);
}


int main(void)
{
	if (pthread_mutex_init(&lock, NULL)) return 1;

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
