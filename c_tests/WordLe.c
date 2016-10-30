/* WordLe */

/* prints a histogram of the lengths of the words in its input */

#include<stdio.h>

#define IN 1
#define OUT 0

int main()
{
	int c, i, state, cl;
	wordlength[15];
	while((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\n' || c == '\t')
		{
			++wordlength[cc];
			cc = 0;
		}
		else
		{
			if (c != '.' && c != ',')
			++cc;
		}
	}
		
	printf("Length of the words:\n"
	for (i = 0; i < 15; ++i)
	{
		printf("%d", wordlength[i]);
	}
	return 0;
}