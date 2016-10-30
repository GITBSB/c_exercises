#define <stdio.h>

int main()
{
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
	
	return 0;
}