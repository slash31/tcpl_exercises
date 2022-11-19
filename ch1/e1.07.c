#include <stdio.h>

int main() {
	int c;

	while ((c = getchar()) != EOF)
		printf("EOF value is %d\n", (c = getchar()) != EOF);
	printf("EOF value is %d\n", (c = getchar()) != EOF);
	return 0;
}

