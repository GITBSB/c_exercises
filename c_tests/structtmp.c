#include <stdio.h>

struct kundentyp;
void wertzuweisung(int i);
void verschiebe_kunde(int j);
void kunden_ausgabe(struct kundentyp *kundenptr);

struct kundentyp 
{
	int nummer;
	char vorname[15];
	char nachname[20];
	char wohnort[20];
};

struct kundentyp kunde[10];
struct kundentyp kunden;
int maxkunde = -1;

void clearscr()
{
	int i;
	for (i = 1; i <=10; ++i)
	{
		printf("\n");
	}
}

void copy_string(char *ziel, char *quelle)
{
	while(*ziel++ = *quelle++);
}

void kunden_einfuegen()
{
	int i = 0, j;
	while((i < maxkunde) && (kunden.nummer > kunde[i].nummer))
	{
		++i;
	}
	if(i < maxkunde)
	{
		for(j = maxkunde; j >= i; --j) {
			verschiebe_kunde(j);
		}
	}
	wertzuweisung(i);
}

void eingabe_kunden_daten()
{
	clearscr();
	
	printf("\n\t\t***KUNDENEINGABE***\n");
	printf("\n\tNummer:");
	scanf("%d%c",&kunden.nummer);
	printf("\n\tVorname:");
	scanf("%s", &kunden.vorname);
	printf("\n\tNachname:");
	scanf("%s", &kunden.nachname);
	printf("\n\tWohnort:");
	scanf("%s", &kunden.wohnort);
}

void kunden_eingeben()
{
	char cr;
	++maxkunde;
	eingabe_kunden_daten();
	kunden_einfuegen();
	printf("\t\t\t%d", maxkunde);
	cr = getchar();
	cr = getchar();
}

void verschiebe_kunde(int j)
{
	kunde[j+1].nummer = kunde[j].nummer;
	copy_string(kunde[j+1].vorname, kunde[j].vorname);
	copy_string(kunde[j+1].nachname, kunde[j].nachname);
	copy_string(kunde[j+1].wohnort, kunde[j].wohnort);
}

void wertzuweisung(int i)
{
	kunde[i].nummer = kunden.nummer;
	copy_string(kunde[i].vorname, kunden.vorname);
	copy_string(kunde[i].nachname, kunden.nachname);
	copy_string(kunde[i].wohnort, kunden.wohnort);
}


void kunden_ausgabe(struct kundentyp *kundenptr)
{
	printf("\n\n\t***KUNDENAUSGABE***\n");
	printf("\tNummer: %d", kundenptr->nummer);
	printf("\n\tName: %s", kundenptr->nachname);
	printf("\n\tVorname: %s",kundenptr->vorname);
	printf("\n\tWohnort: %s\n\n", kundenptr->wohnort);
}

void kunden_ausgeben(struct kundentyp *kundenptr)
{
	printf("\n\n hgjhlljkfllhf\n\n");
	int j;
	for(j = 0;j < maxkunde; ++j)
	{
        printf("\n\n hgjhlljkflikl-jlu.glktufgl--jklhf\n\n");
		kunden_ausgabe(kundenptr);
		*kundenptr++;
	}
}

struct kundentyp *binaer_suchen(struct kundentyp *beginn, struct kundentyp *ende,int nr)
{
	struct kundentyp *mitte;
	while((beginn->nummer <= ende->nummer) && (nr != mitte->nummer))
	{
		mitte = beginn + (ende - beginn) / 2;
		if(nr < mitte->nummer) {
			ende = mitte - 1;
		} else {
			if(nr > mitte->nummer)
			{
				beginn = mitte + 1;
			}
		}
	}
	if(nr == mitte->nummer){
		return mitte;
	}  else {
		printf("Keinen Kunden gefunden!");
	}
}

struct kundentyp *kunden_suchen()
{
	struct kundentyp *satzptr;
	int nr;
	char ch;
	
	clearscr();
	printf("\n\n\n\tKundennummer:");
	scanf("%d%c", &nr, &ch);
	satzptr = binaer_suchen(&kunde[0], &kunde[maxkunde], nr);
	return satzptr;
}

void kunden_ausFeld_loeschen(struct kundentyp *satzptr)
{
	struct kundentyp *letzter_kunde = &kunde[maxkunde];
	printf("%d\n", letzter_kunde->nummer);
	
	while(satzptr != letzter_kunde)
	{
		satzptr->nummer = (satzptr+1)->nummer;
		copy_string(satzptr->nachname, (satzptr+1)->nachname);
		copy_string(satzptr->vorname, (satzptr+1)->vorname);
		copy_string(satzptr->wohnort, (satzptr+1)->wohnort);
		*satzptr++;
	}
}

void kunden_loeschen()
{
	char ch, ch1;
	struct kundentyp *satzptr;
	
	kunden_ausgabe(satzptr);
	satzptr = kunden_suchen();
	kunden_ausgabe(satzptr);
	
	printf("Datensatz richtig(J/N)");
	scanf("%c%c", &ch, &ch1);
	if(ch == 'J')
	{
		kunden_ausFeld_loeschen(satzptr);
		--maxkunde;	
	}
}

void kunden_aendern()
{
	kunden_loeschen();
	eingabe_kunden_daten();
	++maxkunde;
	kunden_einfuegen();
}

void menue(char *ch)
{
	struct kundentyp *satzptr;
	char cr;
	
	clearscr();
	printf("\t***MENUE***\n\n");
	printf("\tKunden eingeben.....1");
	printf("\n\tKunden ausgeben.....2");
	printf("\n\tKunden suchen.....3");
	printf("\n\tKunden löschen.....4");
	printf("\n\tKunden ändern.....5");
	printf("\n\tSchließen.....0");
	printf("\n\n\n");
	scanf("%c", &*ch);
	
	switch(*ch)
	{
		case '1':
			kunden_eingeben();
			break;
		case '2':
			kunden_ausgeben(kunde);
			break;
		case '3':
			satzptr = kunden_suchen();
			kunden_ausgabe(satzptr);
			cr = getchar();
			cr = getchar();
			break;
		case '4':
			kunden_loeschen();
			break;
		case '5':
			kunden_aendern();
			break;
	}
}

int main()
{
	char ch;	
	do
	{
		menue(&ch);
	}
	while(ch != '0');		
	
	return 0;
}
