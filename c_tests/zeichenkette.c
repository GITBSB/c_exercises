#include <stdio.h>

read_string(char *string)
{
	int i = 0;
	
	do {
		string[i] = getchar();
		++i;
	}
	while (string[i-1] != '\n');
	string[i] = '\0';
}

write_string(char *string)
{
	while(*string)		/* erfüllt solange *string =! '\0' */
	{
		printf("%c", *string++);
	}
}

int length_string(char *string)
{
	int i = 0;
	while(*string)
	{
		*string++;
		i++;
	}
	return i - 1;
}

copy_string(char *string, char *ziel)


{
	while(*ziel++ = *string++);
}

int main()
{
	char string[80], stringneu[80];
	
	read_string(&string[0]);
	
	copy_string(&string[0], &stringneu[0]);
	
	write_string(&stringneu[0]);
	
	printf("Länge des Strings: %d", length_string(&string[0]));

	return 0;
}