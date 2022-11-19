#include <stdio.h>

int main() {
	int c;

	while ((c = getchar()) != EOF)
	{
		if ((c != EOF) == 0 || (c != EOF)  == 1)
			printf("Expression is 0 or 1\n");
		else
			printf("Expression is not 0 or 1!\n");
	}
	return 0;
}

