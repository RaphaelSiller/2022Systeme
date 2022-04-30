#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "dice.h"
#include <string.h>

//Wirft mehrere Wuerfel und gibt dessen Augenzahl aus, damit kann bestimmt werden, wie gut der zufall ist
int main(void) {
	int maxrange = 0;
	int offset = 0;
	int nWuerfe = 0;
	int Wuerfel = 0;
	int eye = 0;
	int eyeSum = 0;


	fprintf(stderr, "Dice\nGeben Sie die anzahl der Würfelseiten ein: ");
	scanf(" %i", &maxrange);
	fprintf(stderr, "Geben Sie einen Offset ein: ");
        scanf(" %i", &offset);
	fprintf(stderr, "Geben Sie die Anzahl der Würfe ein: ");
        scanf(" %i", &nWuerfe);
	srand(time(NULL) + offset * nWuerfe);
	fprintf(stderr, "Geben Sie die Anzahl der Würfel ein: ");
	scanf(" %i", &Wuerfel);

	int nEyeSum[nWuerfe];
	printf("%i\n", Wuerfel*maxrange);

	for(int i = 0; i < nWuerfe; i++) {
		for(int j = 0; j < Wuerfel; j++)
			eyeSum += dice(maxrange,offset, nWuerfe);
		nEyeSum[i] = eyeSum;
		eyeSum = 0;
	}
	printf("Augenzahl	Anzahl an Vorkommen\n");
	for (int i = Wuerfel; i <= Wuerfel*maxrange; i++) {
		int nVorkommen = 0;
		for (int j = 0; j <= nWuerfe; j++) {
			if (nEyeSum[j] == i)
				nVorkommen++;
		}
		printf("%i	%i\n", i, nVorkommen);
	}
}
