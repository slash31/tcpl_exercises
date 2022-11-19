#include <stdio.h>

int main()
{
	int c;
	int bl = 0;
	int tb = 0;
	int nl = 0;

	while ((c = getchar()) != EOF)
		if (c == '\n') {
			++nl;
		} else if (c == '\t') {
			++tb;
		} else if (c == ' ') {
			++bl;
		}
	printf("There were %d blanks, %d tabs, and %d newlines\n", bl,tb,nl);
	return 0;
}

