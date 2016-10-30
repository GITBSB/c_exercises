 /*
 * filecopy.c
 *
 * Author B.Herrmann
 * Erstellt am: 02.06.2014
 */

#include <stdio.h>  /* fprintf */
#include <string.h> /* strerror */
#include "stdlib.h"

#include <fcntl.h>    /* open, O_RDONLY, O_WRONLY, O_CREAT, O_EXCL */
#include <sys/stat.h> /* mode_t, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH */
#include <unistd.h>   /* read, write */
#include <errno.h>    /* errno */

int main(int argc, char *argv[])
{
	
	struct stat st;
    const mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH; /* rw-r--r-- */
    int in, out; /* Dateideskriptoren */
    int n, m;
	char *fb;

    if (argc != 3)
    {
        fprintf(stderr, "Aufruf: %s Quelle Ziel\n", argv[0]);
        return 1;
    }
	
    errno = 0; /* kein Fehler */

    in = open(argv[1], O_RDONLY);
    if (in == -1)
    {
        fprintf(stderr,
                "Quelle %s kann nicht geoeffnet werden (errno %d: %s)\n",
                argv[1], errno, strerror(errno));
        return 1;
    }
	
	if(fstat(in, &st)) 
    { 
        printf("\nfstat error: [%s]\n",strerror(errno)); 
        close(in); 
        return -1; 
    }
	
	ssize_t size;
	size = st.st_size;
	
	fb = (char*)malloc(size);
	if( fb == NULL) 
	{
	fprintf(stderr,
                "Fehler bei der Speicherreservierung(errno %d: %s)\n",
                argv[2], errno, strerror(errno));
	}
	
    out = open(argv[2], O_WRONLY | O_CREAT | O_EXCL, mode);
    if (out == -1)
    {
        fprintf(stderr,
                "Ziel %s kann nicht erzeugt werden (errno %d: %s)\n",
                argv[2], errno, strerror(errno));
        return 1;
    }
	
    if ((n = read(in, fb, size)) > 0)
    {
        m = write(out, fb, (ssize_t) n);
        if (m != n)
        {
            fprintf(stderr,
                    "Schreibfehler (errno %d: %s)\n", errno, strerror(errno));
            return 1;
        }
    }

    if (n < 0)
    {
        fprintf(stderr,
                "Lesefehler (errno %d: %s)\n", errno, strerror(errno));
        return 1;
    }

    close(out);
    close(in);

    return 0;
}
