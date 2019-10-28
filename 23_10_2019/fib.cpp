//  fib.cpp modulo mod

int fib(int m, bool new_loop)
{
	static int f1 = 0, f2 = 1, f;

	if(new_loop)
	{
		f1 = 0;
		f2 = 1;
	}

	f = f1;
	f1 = (f1 + f2) % m;
	f2 = f;
	return f1;
}
