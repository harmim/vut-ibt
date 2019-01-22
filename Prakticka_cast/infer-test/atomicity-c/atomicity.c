#include <stdlib.h>
#include <pthread.h>
#include <stdio.h>


pthread_mutex_t lock;


void f1(void) {}
void f2(void) {}
void f3(void) {}
void f4(void) {}
void f5(void) {}



void test1(void)
{
	f1(); f1();

	pthread_mutex_lock(&lock);
	{
		f1(); f1(); f2();
	}
	pthread_mutex_unlock(&lock);

	f1(); f1();

	pthread_mutex_lock(&lock);
	{
		f1(); f3();
	}
	pthread_mutex_unlock(&lock);

	f1();

	pthread_mutex_lock(&lock);
	{
		f1(); f3(); f3();
	}
	pthread_mutex_unlock(&lock);
}


void test2(void)
{
	f1(); f1();

	pthread_mutex_lock(&lock);
	{
		f1(); f1(); f2();
	}
	pthread_mutex_unlock(&lock);

	f3(); f3();

	pthread_mutex_lock(&lock);
	{
		f1(); f4(); f4();
	}
	pthread_mutex_unlock(&lock);
}


void only_lock(void)
{
	pthread_mutex_lock(&lock);
	f1();
}


void only_unlock(void)
{
	f2();
	pthread_mutex_unlock(&lock);
}


void test_not_paired_lock(void)
{
	only_lock();
	only_unlock();
}


void test_iteration(void)
{
	f1(); f2();

	int c1;
	while (c1 > 0)
	{
		c1++;
		f3(); f5();
	}

	pthread_mutex_lock(&lock);
	{
		f1(); f2();
	}
	pthread_mutex_unlock(&lock);

	pthread_mutex_lock(&lock);
	{
		int c2;
		while (c2 > 0)
		{
			c2++;
			f3();
		}
	}
	pthread_mutex_unlock(&lock);

	f4();
}


void test_selection(void)
{
	f1(); f2();

	int c1;
	if (c1 > 0)
	{
		f3(); f5();
	}
	else
	{
		pthread_mutex_lock(&lock);
		f1();
		pthread_mutex_unlock(&lock);
	}

	pthread_mutex_lock(&lock);
	{
		f2();

		int c2, c3;
		if (c2 > 0)
		{
			f3();
		}
		else if (c3 > 0)
		{
			f4();
		}
	}
	pthread_mutex_unlock(&lock);

	f4();
}


void ff(void) { f1(); f2(); }


void test_lock_nested(void)
{
	pthread_mutex_lock(&lock);
	{
		ff(); f3();
	}
	pthread_mutex_unlock(&lock);

	pthread_mutex_lock(&lock);
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
	test_not_paired_lock();
	test_iteration();
	test_selection();
	test_lock_nested();

	pthread_mutex_destroy(&lock);

	return 0;
}
