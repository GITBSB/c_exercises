#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Adresse
{
char Name[200];  /*const char *x   */
const char *ort;
int AEintr;
char Geburtstdatum[100];
};
int main(int argc, char *argv[])
{
	struct Adresse AdressName = {"Benny", "Konstanz", 1, "20.08.1992"};

	/*strcpy(AdressName.Name,"Benny Herrmann");
	strcpy(AdressName.Ort,"Konstanz");
	strcpy(AdressName.Geburtstdatum,"20.08.1992");*/
	printf("Eintrag Nummer %d\n", AdressName.AEintr);
	printf("Name: %s\n", AdressName.Name);
	printf("Ort: %s\n", AdressName.ort);
	printf("Geburtstdatum:%s\n",AdressName.Geburtstdatum);

	return 0;
}