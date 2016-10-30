#include <stdio.h>

int main(int argc, char *argv[])
{
	FILE *fp;
	int i, n;
	
	for (i = 1; i < argc; ++i)
	{
		fp = fopen(argv[i], "r");
		if (fp == NULL)
		{
			fprintf(stderr, "Datei existiert nicht!");
		}
		n = 0;
		while (fgetc(fp) != EOF) ++n;
		
		printf("%s: %d Zeichen\n", argv[i], n);
		fclose(fp);
	}
	return 0;
}