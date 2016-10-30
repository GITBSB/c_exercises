/*
 * filesize.c
 *
 * Author B.Herrmann
 * Erstellt am: 02.06.2014
 */

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	int i;
	struct stat st;
	if (argc < 2)
	{
		fprintf(stderr,"Fehler: Dateinamen angeben!\n");
		return 1;
	}
	
	for (i = 1; i < argc; ++i)
    {
		if (stat(argv[i], &st) != 0)
		{
			fprintf(stderr,"Fehler: Die Datei %s existiert nicht!",argv[i]);
			return 1;
		}
		stat(argv[i], &st);
		printf("%s: %d bytes\n",argv[i], st.st_size);
	}
  return 0;
}