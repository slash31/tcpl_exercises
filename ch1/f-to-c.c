#include<stdio.h>

int main ()
{
	float f,c;
	int lbound,ubound,interval;

	lbound = 0;
	ubound = 300;
	interval = 20;

	f = lbound;

	while(f <= ubound)
	{
		c = 5.0/9.0 * (f-32);
		printf("%8.2f F %12.2f C\n",f,c);
		f += interval;
	}
	return 0;
}
