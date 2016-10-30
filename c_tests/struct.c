#include <stdio.h>

struct int_list
{
	struct int_list *next; /* Verkettung */
	int n;
};

struct dat
{
	const char *wertus;
	int wert;
};

struct date
{
	int day;
	const char *month;
	int year;
	char geb;
	const char *s1;
};

enum int_or_string {type_int, type_string, t_char};
struct struct_with_union
{
	enum int_or_string u_type;
	union
	{
		int i;
		char *s;
		char z;		
	} u;
}; 

main()
{
	struct int_list last = {NULL, 10};
	struct int_list first = {&last, 20};
	
	struct dat dd;
	dd.wertus = "Hallo";
	dd.wert = 7658;
	struct date d = {20, "August", 1992, 'P', "Pforzheim"};
	
	/*struct date *dp = (struct date*) malloc(sizeof(struct date));
	dp->day = 7;					 (*dp).day
	dp->month = "November";
	dp->year = 2014; 
	*/
	
	printf("Speicherplatz: %lu\n%lu\n%s\n", (unsigned long) sizeof dd,
	(unsigned long) sizeof(dd.wertus), dd.wertus);
	
	printf("Speicherplatz: %lu\n%lu\n%lu\n%lu\n%lu\n%lu\n\n", (unsigned long) sizeof d,
	(unsigned long) sizeof(d.day), (unsigned long) sizeof(d.month), (unsigned long)sizeof(d.year),
	(unsigned long) sizeof(d.geb), (unsigned long) sizeof(d.s1));
	
	printf("%d. %s %d\n", d.day, d.month, d.year);
	
	printf("&d = %p\n", (void*) &d);
	printf("&d.day = %p\n", (void*) &d.day);
	printf("&d.month = %p\n", (void*) &d.month);
	printf("&d.year = %p\n", (void*) &d.year);
	
	printf("sizeof d = %lu\n", (unsigned long) sizeof d);
	
	struct struct_with_union x;
	x.u_type = type_int;
	x.u.i = 1;
	printf("%d\n",x.u.i);
	x.u_type = type_string;
	x.u.s = "Hallo";
	printf("%s\n",x.u.s);
	x.u_type = t_char;
	x.u.z = 'B';
	printf("%c\n",x.u.z);

	return 0;
}