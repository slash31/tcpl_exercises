#include <stdio.h>

#define OFFSET 32
#define SIZE 95

int main()
{

	int i, j;
	int c, nl,  ubound;
	char chr[2];
	ubound = 0;
	int counts[SIZE];

	for (i = 0; i < SIZE; i++)
		counts[i] = 0;

	while ((c = getchar()) != EOF) {
		if (c >= OFFSET && c < OFFSET + SIZE)  {
			++counts[c - OFFSET];
			if (counts[c - OFFSET] > ubound)
				ubound = counts[c - OFFSET];
		}
	}

	printf("\n\n");
	for (i = ubound; i > 0; i--) {
		printf("%3d|", i);
		for (j = 0; j < SIZE; j++) {
			if (counts[j] == i) {
				printf("*");
				--counts[j];
			} else { 
				printf(" ");
			}
		}
		printf("\n");
	}
        
	for (i = OFFSET; i < SIZE + OFFSET + 3; i++) {
                printf("-");
        }
        printf("\n    ");
        for (i = OFFSET; i < SIZE + OFFSET; i++) {
		printf("%c", i);
	}
        printf("\n\n");
	return 0;

}

