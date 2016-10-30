#include <stdio.h>
#include <stdlib.h> /* malloc, calloc*/
#include <stddef.h> /*size_t, NULL*/
#include <string.h> /*strcat*/

int main()
{
	int i, j;
	int a[] = {1222, 1333, 1444, 1555, 1, 2 };
	const int n = (int)(sizeof a / sizeof (int));
	
	const int m = 6;

	int *b = (int*) malloc(sizeof (int) * m);/*Typ *zeigername = (Typ*) calloc(size_t m, sizeof(Typ));*/
	if (b == NULL)
	{
		printf("Fehler bei der Speicherreservierung!\n");
	}
	b[0] = 3434;
	b[1] = 3555;
	b[2] = 4545;
	b[3] = 3342;
	b[4] = 3575;
	b[5] = 3479;
	
	printf("b: %p &b: %p\n", b, &b);
	printf("sizeof b: %lu sizeof *b: %lu\nFeldgröße: %lu \n", (unsigned long) sizeof b,
															(unsigned long) sizeof *b, sizeof b * m);
	for(j = 0; j < m ; j++)
	{
		printf("%d: %p %d\n", j, (void*) &b[j], b[j]);
	}
	
	printf("\n");
	printf("Feldgroesse: %lu\nZeigergroesse: %lu\n", (unsigned long) sizeof a,(unsigned long) sizeof *a );
	printf("Speicheradresse: %p\n%p\n", (void*) a, &a);
	
	for(i = 0; i < n; i++)
	{
		printf("%d: %p %d\n", i, (void*) &a[i], a[i]);
	}
	
	free(b);
	return 0;
}

