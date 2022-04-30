#include <stdio.h>
#include "summe.h"
#include "subtrakt.h"
#include "multipl.h"
#include "division.h"

/*
 * Berechnet die Summe, Differenz, Produkt und Quotient von s1 und s2
 */
int main(int ergebniss)
{
	int s1 = 12;
	int s2 = 4;
	printf("Zahl1 = ");
	scanf("%i", &s1);
	printf("Zahl2 = ");
        scanf("%i", &s2);
	printf("Die ... von %i und %i beträgt\n", s1, s2);
	printf("Summe = %i\n", summe(s1, s2));
	printf("Differenz = %i\n", subtrakt(s1, s2));
	printf("Produkt = %i\n", multipl(s1, s2));
	printf("Quotient = %i\n", division(s1, s2));
	return 0;
}
