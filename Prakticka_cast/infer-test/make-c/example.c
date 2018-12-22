void f1()
{
	return;
}


int f2()
{
	f1();
	return 1;
}


int main()
{
	int a = 5;
	int b = 1;
	if (f2())
	{
		a = b + 1;
	}
	else
	{
		a = a + 3;
	}
	a = a - 42;
	b = b + 42;

	return 0;
}
