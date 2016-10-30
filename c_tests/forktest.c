#include <stdio.h>

int main()
{
    int xf = 5;
    int xs = 7;
    int xnn = 99;
    int forkval;

    forkval = fork();
    printf("%d\n", forkval);

    if(forkval < 0) {
        fprintf(stderr, "fork nicht erfogreich!\n");
    } else if(forkval < 0) {
        printf("%d Elternprozess\n", xf);
    } else {
        xf += 5;
        printf("%d Kindprozess\n", xf);
    
    }
    return 0;
}
