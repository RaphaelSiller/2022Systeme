#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "dice.h"
#include <string.h>

//Testprogramm für das Wuerfelmodul
int main(void) {
	int maxrange = 0;
	int offset = 0;
	int nWuerfe = 0;
	char modus = 't';
	
	fprintf(stderr,"Wuerfeltest(t) oder passwordgenerator(p)");
	scanf(" %c", &modus);

	// if (modus == 't') {
		fprintf(stderr, "Dice\nGeben SIe die MAXRANGE ein: ");
		scanf(" %i", &maxrange);
		fprintf(stderr, "Geben SIe einen Offset ein: ");
	        scanf(" %i", &offset);
		fprintf(stderr, "Geben SIe die Anzahl der Würfe ein: ");
	        scanf(" %i", &nWuerfe);
		srand(time(NULL) + offset * nWuerfe);
		
		for(;nWuerfe > 0; nWuerfe--)
			printf("%i\n", dice(maxrange, offset, nWuerfe));
	// } else { 
	// 	char zeichenYN = 'n';
	// 	fprintf(stderr, "Passwortgenerator\nGeben Sie die gewünschte Länge ein: ");
	// 	scanf(" %i", &nWuerfe);
	// 	fprintf(stderr, "Geben Sie einen Offset ein: ");
	// 	scanf(" %i", &offset);
	// 	fprintf(stderr, "Zeichen (Y/N): ");
	// 	scanf(" %c", &zeichenYN);
	// 	srand(time(NULL) + offset * nWuerfe);

	// 	char pwd[nWuerfe + 1];
	// 	char addendum[2];
	// 	addendum[1] = '\0';
	// 	for(int i= 0; i<nWuerfe; i++) {
	// 		if (zeichenYN == 'N' || zeichenYN == 'n') {
	// 			while (!((addendum[0] >= 33 && addendum[0] <= 95) || (addendum[0] >= 97 && addendum[0] <= 125))) //mit Zeichen
	// 				addendum[0] = dice(126, offset, nWuerfe);
	// 		} else {
	// 			while (!((addendum[0] >= 48 && addendum[0] <= 57) || (addendum[0] >= 65 && addendum[0] <= 90) || (addendum[0] >= 97 && addendum[0] <= 122))) //mit Zeichen
	// 				addendum[0] = dice(126, offset, nWuerfe);
	// 		}
	// 		strcat(pwd, addendum);
	// 		printf(addendum[0]);	
	// 	}
	// 	printf(pwd);
	// } 
}
