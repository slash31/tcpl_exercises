#include <stdio.h>

#define IN 1	// inside a word
#define OUT 2	// outsdie a word


int main()
{

	int i, j;
	int c, nc, state, ubound;
	state = OUT;
	nc = ubound = 0;
	int counts[11];

	for (i = 0; i < 11; i++)
		counts[i] = 0;

	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
			if (nc < 11) {
				++counts[nc];
				if (counts[nc] > ubound)
					ubound = counts[nc];
			} else if (nc != 0) {
				++counts[0];
				if (counts[0] > ubound)
					ubound = counts[0];
			}
			nc = 0;
		} else if (state == OUT) {
			state = IN;
			++nc;
		} else {
			++nc;
		}
	}
	printf("\n\n");
	for (i = ubound; i > 0; i--) {
		printf(" ");
		for (j = 0; j < 11; j++) {
			if (counts[j] == i) {
				printf(" * ");
				--counts[j];
			} else { 
				printf("   ");
			}
		}
		printf("\n");
	}
        printf("----------------------------------\n");
	printf(">10  1  2  3  4  5  6  7  8  9  10\n");
	return 0;
}

