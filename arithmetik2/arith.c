#include <stdio.h>
#include "summe.h"
#include "subtrakt.h"
#include "multipl.h"
#include "division.h"

/*
 * Berechnet die Summe, Differenz, Produkt und Quotient von s1 und s2. Jetzt mit Eingabe
 */
int main(int ergebniss)
{
	int s1 = 12;
	int s2 = 4;
	char modus = 'a';
	char run = 89;

	do {
		//Eingabe Zahlen
		printf("Zahl1 = ");
		scanf("%i", &s1);
		printf("Zahl2 = ");
        	scanf("%i", &s2);
	
		//Auswahl Rechenoperation
		printf("\nAddition = a\n");
		printf("Subtraktion = s\n");
		printf("Multiplikation = m\n");
		printf("Division = d\n");
		printf("Waehlen Sie die Rechenoperation aus\n");
		scanf(" %c", &modus);
	
		//Verarbeitung
		switch(modus) {
			case 'a':
				printf("Summe = %i\n", summe(s1, s2));
				break;
			case 's':
				printf("Differenz = %i\n", subtrakt(s1, s2));
				break;
			case 'm':
				printf("Produkt = %i\n", multipl(s1, s2));
				break;
			case 'd':
				printf("Quotient = %i\n", division(s1, s2));
				break;
		}

		//Wiederholung?
		printf("\nMoechten Sie eine weitere Rechenoperation durchfuehren? y/n\n");
		scanf(" %c", &run);
		printf("OK\n");
	
} while(run == 89 || run == 121);   
	return 0;
}
