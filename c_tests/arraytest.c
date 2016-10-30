#include <stdio.h>

int main()
{
    char *meldung[3] = {"vor", "vier", "jahren"};

    int count;
    for(count = 0; count < 3; count++)
        printf("%s", meldung[count]);
    return 0;
}
