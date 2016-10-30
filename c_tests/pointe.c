#include <stdio.h>

int main(int argc, char **argv)
{
        double array[5]={5.0,10.0,15.0,20.0,25.0};
        double *pointer;
        int range;
        pointer =&array[0];
        printf("%f\n", *pointer);
        pointer = array;
        pointer+=3;
        printf("%f\n", pointer[0]);
        range = pointer - array;
        printf("%i\n", range);
        return 0;
}