#include <stdio.h>

#define MAXLINE 1000 // max input line size

int rgetline(char line[], int maxline);
void printLine(char line[], int len);

int main() {

	int len, displayed;
	char line[MAXLINE];

	while ((len = rgetline(line, MAXLINE)) > 0) {
	printLine(line,len);
	}
	return 0;
}

void printLine(char line[], int len) {
	int displayed;

	if (len >= MAXLINE) {
		displayed = MAXLINE;
	} else {
		displayed = len;
	}
	printf("\n\nThe following line is %d chars (%d displayed):\n\n",len,displayed);
	printf("%s\n", line);
}

int rgetline(char s[], int lim) {
	int c, i, j, rc;

	for (i = 0; (c=getchar()) != EOF && c != '\n' ; ++i)
		if (i < lim - 1)
			s[i] = c;
	if (c == '\n') {
		if(i < lim - 1)
			s[i] = c;
		j = i-1;
		rc = s[j];
		// now work backtrack from the newline char and move it to the position of the first trailing space
		while(rc == ' ' || rc == '\t') {
			i = j--;
			rc = s[j];	
		}
		s[i] = '\n';
		i++;
	}
	s[i] = '\0';
	return i-1;
}

