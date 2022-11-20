#include <stdio.h>

#define MAXLINE 1000 // max input line size

int rgetline(char line[], int maxline);
void copy(char to[], char from[]);

int main() {

	int len, max, displayed;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;

	while ((len = rgetline(line, MAXLINE)) > 0)
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	if (max > 0) {
		if (max >= MAXLINE) {
			displayed = MAXLINE;
		} else {
			displayed = max;
		}
		printf("\n\nThe following longest line is %d chars (%d displayed):\n\n",max,displayed);
		printf("%s\n", longest);
	}
	return 0;
}

int rgetline(char s[], int lim) {
	int c, i;

	for (i = 0; (c=getchar()) != EOF && c != '\n' ; ++i)
		if (i < lim - 1)
			s[i] = c;
	if (c == '\n') {
		if(i < lim - 1)
			s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}


void copy(char to[], char from[]) {

	int i = 0;

	while ((to[i] = from[i]) != '\0')
		++i;
}
