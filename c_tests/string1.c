#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char string1[100] = {"Das ist der erste String und jetzt sollte deine Eingabe folgen: "};
	char Eingabe[100];
	char string2[100] = {"Jetzt kommt der 2. String"};

	printf("Gebe ein was dir gerade einfaellt: ");
	fgets(Eingabe, 100, stdin);

	strcat(string1, " ");
	strcat(string1, Eingabe);

	printf("%s%s\n", string1, string2);

	return 0;
}