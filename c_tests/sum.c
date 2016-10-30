#include <stdio.h>
#include <ctype.h>
int main()
{
	int sum = 0;
	int n;
	
	printf("Zahlen eingeben");
	
	while (1)
	{
		int i = scanf("%d", &n);
		
		if(i == EOF)
		{
			fprintf(stderr, "eingabefehler\n");
			break;
		}
		else if (i == 0)
		{
			char c;
			fprintf(stderr, "Eingabe keine Zahl\n");
			while ((c =getchar()) != EOF && !isspace(c))
			{
				putc(c, stderr);
			}
			putc('\n', stderr);
			continue;
		}
		sum += n;
	}
	printf("Summe: %d\n", sum);
	return 0;
}