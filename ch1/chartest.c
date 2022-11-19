#include <stdio.h>


char pickOne()
{
	return 'A';
}

int main()
{
	char rChar = pickOne();
	printf("Picked %c\n", rChar);
	return 0; 
}
