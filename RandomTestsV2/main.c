#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "dice.h"
#include <string.h>
#include "eyeSum.h"

//Wuerfelt nWuerfe mal mit nWuerfel und notiert fuer jeden Wurf die Augensumme. Gibt dann die Notizen aus
int main(void) {
	int nWuerfe = 0;
	int offset = 0;
	int nWuerfel = 1;
	int deyeceSum = 0;
	int w[11][61];

	fprintf(stderr, "Geben Sie an, wie oft die Würfel geworfen werden sollen: ");
        scanf(" %i", &nWuerfe);
	fprintf(stderr, "Geben Sie einen Offset ein: ");
        scanf(" %i", &offset);
	srand(time(NULL) + offset * nWuerfel);
	
	//Bereinigung des Arrays
	for (; nWuerfel<11; nWuerfel++) {
		for(int i = 0; i <= 60; i++) {
			w[nWuerfel][i] = 0;
		}
	}
	
	//Ermittlung wie oft Augensumme gewürfelt wurde
	for (nWuerfel = 1; nWuerfel<11; nWuerfel++) {
		for (int i = 0; i<nWuerfe; i++) {
			deyeceSum = eyeSum(nWuerfel);
			w[nWuerfel][deyeceSum]++;
			fprintf(stderr, "mit %i Wuerfel\t%i\n",nWuerfel, deyeceSum);
		}
	}

	//Ausgabe des Arrays
	for (nWuerfel = 1; nWuerfel<11; nWuerfel++) {
		printf("\n%i Würfel\t", nWuerfel);
		for(int i = 1; i <= nWuerfel*6; i++) {
			printf("%i \t", w[nWuerfel][i]);
		}
	}
}
