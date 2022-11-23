#include <stdio.h>

#define MAXLINE 1000
#define TABWIDTH 8

int getLine(char line[], int maxline);

int main() {

	int len, displayed;
	char line[MAXLINE];

	while ((len = getLine(line, MAXLINE)) > 0) {
        	printf("%s\n", line);
	}
	return 0;
}

int getLine(char s[], int lim) {
	int c, i, j, pad;

	for (i = 0; (c=getchar()) != EOF && c != '\n' ; ++i) {
		if (i < lim - 1) {
			s[i] = c;
			if (s[i] == '\t') {
				pad = TABWIDTH-((i+1)%TABWIDTH);
				for (j = 0; j < pad; j++) {
					s[i++] = ' ';
				}		
				s[i] = ' ';
			}
		}
	}

	if (c == '\n') {
		if(i < lim - 1)
			s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}
