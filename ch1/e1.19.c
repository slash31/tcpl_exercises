#include <stdio.h>

#define MAXLINE 1000 // max input line size

int rgetline(char line[], int maxline);
void printLine(char line[], int len);
void revLine(char line[], char rline[]);

int main() {

	int len, displayed;
	char line[MAXLINE];
	char rline[MAXLINE];

	while ((len = rgetline(line, MAXLINE)) > 0) {
		revLine(line, rline);
		printLine(rline,len);
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
	printf("\n\nThe following line is %d chars (%d displayed):\n\n", len, displayed);
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

void revLine(char line[], char rline[]) {

	int i, npos;
	char c;

	for(npos = 0; line[npos] != '\0'; npos++);
	for(i = 0; (rline[i] = line[--npos]) && npos >= 0; i++); 
	rline[i] = '\0';
}	
