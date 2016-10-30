#include <stdio.h>

#define MAX 5

struct teil {
    int zahl;
    char *name;
};

struct teil daten[MAX] = {{1, "Anne"},
                          {2, "Benny"},
                          {3, "Julie"},
                          {4, "Loren"}
                         };
struct teil *z_teil;
int count;

int main()
{
    z_teil = daten;

    for (count = 0; count < MAX; count++)
    {
        printf("An Adresse %lu: %d %s\n", (unsigned long)z_teil, z_teil->zahl, z_teil->name);
        z_teil++;
    }
    return 0;
}   
