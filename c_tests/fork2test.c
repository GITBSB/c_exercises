#include <stdio.h>
int global;
int main() 
{
    global = 100;
    int i =7;
    int j = 0;
    int val = fork();
    global += 9;
    i += 3;
    j += 5;
    printf("%d\n%d\n", i,j);
    printf("\n\n%d", global);
    return 0;
}
    
