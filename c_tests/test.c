#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

struct da
	{
		int zimmer;
		char geb;
		const char *art;
	};
	
int main()
{	
	char s1[] = "Halli";
	const char *s = "Hallo";
	char *b = NULL;
	char Eingabe[100];
	int number;
	int groesse;
	
	/*printf("Zahl eingeben:\n");
	scanf("%d", &number);
	printf("Eingegebene Zahl ist %d\n\n", number);*/
	
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
	printf("s1 = %p %s\ns = %p %s\nb = %p %s\n\n", (void*) s1, s1, (void*) s, s, (void*) b, b);

	int z = 123;
	int *zp;
	zp = &z;
	
	printf("*zp = %d\n", *zp);
	printf("zp = %d\n", zp);
	printf("&zp = %d\n\n", &zp);

	int zahl = 2345;
	int *pzahl = &zahl;

	printf("zahl = %d\n", zahl);
	printf("&zahl = %p\n\n", &zahl);
	
	printf("*pzahl = %d\n", *pzahl);
	printf("pzahl = %p\n", (void*) pzahl);
	printf("&pzahl = %p\n\n", (void*) &pzahl);
	
	printf("sizeof zahl = %lu\n", (unsigned long) sizeof &zahl);
	printf("sizeof pzahl= %lu\n\n", (unsigned long) sizeof pzahl);
	
	
	int a[] = {3633, 9832, 8773, 4436};
	const int n = (int)(sizeof a / sizeof (int));
	int i;
	
	printf("a = %p\n", (void*) a);
	printf("&a = %p\n", (void*) &a);
	for (i = 0; i < n; ++i)
	{
		printf("%d: %p %d\n", i, &a[i], a[i]);	}
	
	printf("sizeof a = %lu\n", (unsigned long) sizeof a);
	printf("%d * sizeof *a = %lu\n\n", (unsigned long) n* sizeof *a);
	
	printf("Gebe ein was dir gerade einfaellt: ");
	fgets(Eingabe, 100, stdin);
	groesse = strlen(Eingabe);
	printf("%s\nBuchstaben: %d\n\n",Eingabe, groesse - 1);
	

	struct da d = {109, 'C', "Hoersaal"};
	printf("sizeof d = %lu\n", (unsigned long) sizeof d);
	printf("Zimmer: %d\nGebaeude: %c\nRaum: %s\n", d.zimmer, d.geb, d.art);
	free(b);
	return 0;
}