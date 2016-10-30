#include <stdio.h>

int main()
{
	struct da
	{
		int zimmer;
		char geb;
		const char *art;
	};
	
	struct da d = {109, 'C', "Hoersaal"};
	printf("sizeof d = %lu", (unsigned long) sizeof d);
}