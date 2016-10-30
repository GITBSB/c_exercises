/* redenverab.c */

#include "redenverab.h"
#include "gruss.h"
#include <stdio.h>

const char *s;

double reden(const double dd)
{
	printf("Dein Name hast du uns ja schon verraten, ich weiß aber noch viel mehr... hehe");
	printf("Du wohnst zurzeit in Konstanz");
	return(verab(dd));
}

double verab(const double dd)
{
	printf("Bis Bald %.2f Jahre alter jemand!\n", dd);
	return dd;
}

int mehrinformationen()
{
	printf("%s ,moechtest du noch mehr über dich erfahren?[Anwort mit Ja, Nein]", name);
	while(1)
	{
		int infzahl = scanf("%s", &s);
		if(infzahl == EOF)
		{
			fprintf(stderr,"Eingabefehler!\n");
		}
		if(s == Ja)
		{
			printf("%.2f\n", reden(22));

		
		}
		else
		{
			break;
		}
		
}