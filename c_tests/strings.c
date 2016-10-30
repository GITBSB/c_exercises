#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

void getAbisZ(char *string);

int main()
{
	char *b = NULL;
	char s1[] = "Halli";
	const char *s = "Hallo";	
	int zahl = 12345;
	char* stringneu = NULL;
	
	printf("%s\n", "Hallo");
	printf("%s\n", "Hal" "lo");
	printf("Hallo\n");
	printf("%c%c%c%c%c\n", 'H', 'a', 'l', 'l', 'o');
	
	if (strcmp(s1, s) < 0);
	{
		b = (char *) malloc(sizeof s1 + strlen(s));
		if (b == NULL)
		{
			fprintf(stderr,"Kein Heap-Speicher mehr\n");
			return 1;
		}
		strcat(strcpy(b, s1), s);
	}
	printf("s1 = %s %lu % lu %p \n", s1, (unsigned long) strlen(s1), (unsigned long)sizeof s1, (void*) s1);
	printf("s = %s %lu %lu %p \n", s, (unsigned long) strlen(s), (unsigned long)sizeof s, (void*) s);
	printf("b = %s %lu %lu %p \n", b,(unsigned long) strlen(b), (unsigned long)sizeof b, (void*) b);
	
	
	/*A - Z*/
	stringneu = (char *) malloc(sizeof(char) * 30);
	if(stringneu == NULL)
	{
		fprintf(stderr, "Kein Heap-Speicher mehr\n");
		return 1;
	}
	getAbisZ(stringneu);
	printf(" A-Z = %s",*stringneu);
	
	/*free memory*/
	free(b);
	free(stringneu);
	
	return 0;
}

void getAbisZ(char *stringneu)
{
	char ch;
    char *zgr;
	int i;
	zgr = stringneu;
	for(ch = 'A'; ch <= 'Z'; ++ch)
    {
		*zgr++ = ch; 
	}
}
