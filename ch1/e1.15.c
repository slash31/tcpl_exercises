#include<stdio.h>

float ftoc (float ftemp);

int main ()
{
	float f,c;
	int lbound,ubound,interval;

	lbound = 0;
	ubound = 300;
	interval = 20;

	f = lbound;

        printf("%11s %13s\n","Fahrenheit","Celsius");
        printf("--------------------------\n");
	while(f <= ubound)
	{
		c = ftoc(f);
		printf("%8.2f F %12.2f C\n",f,c);
		f += interval;
	}
	return 0;
}

float ftoc (float f) {

	float c = 5.0/9.0 * (f-32);
	return c;
}
