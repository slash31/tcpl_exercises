#include <stdio.h>

#define MAXLINE 1000 // max input line size
#define THOLD 80 // print lines longer than the threshold value

int rgetline(char line[], int maxline);
void printLine(char line[], int len);
void copy(char to[], char from[]);

int main() {

	int len, displayed;
	char line[MAXLINE];

	while ((len = rgetline(line, MAXLINE)) > 0) {
		if (len > THOLD) {
			printLine(line,len);
		}
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
	printf("\n\nThe following line is >= %d chars (%d displayed):\n\n",THOLD,displayed);
	printf("%s\n", line);
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
