#include<stdio.h>

int main ()
{
	float f,c;
	int lbound,ubound,interval;

	lbound = 0;
	ubound = 300;
	interval = 20;

	c = lbound;

        printf("%11s %13s\n","Celsius","Fahrenheit");
        printf("--------------------------\n");
	while(f <= ubound)
	{
		f = 9.0/5.0 * c + 32;
		printf("%8.2f C %12.2f F\n",c,f);
		c += interval;
	}
	return 0;
}
