/*
 * localglobalvar.c
 *
 * Beispiel-Programm lokale und globale Variablen
 *
 * Autor: H.Drachenfels
 * Erstellt am: 29.2.2012
 */
#include <stdio.h>

int function(int param);

int global = 1;

int main()
{
    int local = 1 ;

    local = function(local);    /* local wird 4 */
	printf("global = %d", global);
    local = function(global );  /* local wird 7 */
	
	printf("global = %d", global);

    return 0;
}

int function(int param)
{
    static int private_global = 1;
    int local = param + 1;
    private_global++;
    global = param + 2;
    return local + private_global;
}

