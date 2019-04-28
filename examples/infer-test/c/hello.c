#include <stdlib.h>
#include <pthread.h>
#include <stdio.h>


pthread_mutex_t lock;


void foo(void);


void foo(void)
{
	printf("foo\n");
}


void test(void)
{
	foo();
	foo();

	pthread_mutex_lock(&lock);

	//int *s = NULL;
	//*s = 42;
	printf("foo\n");

	pthread_mutex_unlock(&lock);

	foo();
	foo();
}


int main(void)
{
	if (pthread_mutex_init(&lock, NULL)) exit(1);

	test();
	test();

	pthread_mutex_destroy(&lock);
	exit(0);
}
