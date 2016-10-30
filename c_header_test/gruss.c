/* gruss.c */
#include "gruss.h"
#include <stdio.h>
double intalter = 22;
double *zp = &intalter;
const char *name;

void gruessen(void)
{
	printf("Hallo\nWie ist dein Name?");
	int i = scanf("%s", &name);
	if(i == EOF)
	{
		fprintf(stderr, "Eingabefehler!\n");
	}
}