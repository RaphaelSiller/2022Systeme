#include <stdio.h>
int main(void) {
	int kRead[3];
    int k;
    int i=0;
    FILE *input;
    FILE *inputK;
    FILE *output;
    FILE *errorOutput;
    input = fopen("../Dateien/output2Feh.txt", "r");
    inputK = fopen("../Dateien/K.txt", "r");
    output = fopen("../Dateien/output3Dec.txt", "w");
    errorOutput = fopen("../Dateien/errors.txt", "w");
	
     //Anzahl Byte scannen 
    while(fscanf(inputK, "%i", &kRead[i]) != EOF) {
	k = k*10 + kRead[i];
        i++;
    }
    //printf("k = %i", k);

    char bit[k*24 + 3];
    //Byte scannen
	i = 0;
    while(fscanf(input, "%c", &bit[i]) != EOF) {
        i++;
    }

    //Ermittlung der p*
    int pStern[k*4]; 
    for (int byteNr = 0; byteNr < k; byteNr++) {
        //Paritaet 0
		pStern[0 + 4 * byteNr] = (bit[2+12*byteNr] + bit[4+12*byteNr] + bit[6+12*byteNr] + bit[8+12*byteNr] + bit[10+12*byteNr]) % 2;
		//Paritaet 1
		pStern[1 + 4 * byteNr] = (bit[2+12*byteNr] + bit[5+12*byteNr] + bit[6+12*byteNr] + bit[9+12*byteNr] + bit[10+12*byteNr]) % 2;
		//Paritaet 2
		pStern[2 + 4 * byteNr] = (bit[4+12*byteNr] + bit[5+12*byteNr] + bit[6+12*byteNr] + bit[11+12*byteNr]) % 2;
		//Paritaet 3
		pStern[3 + 4 * byteNr] = (bit[8+12*byteNr] + bit[9+12*byteNr] + bit[10+12*byteNr] + bit[11+12*byteNr]) % 2;
    }
    
    //Ausgabe der Paritaeten
    for (int j = 0; j < k; j++) {
        printf("%i\t", bit[0 + 12*j] - '0');
        printf("%i\t", bit[1 + 12*j] - '0');
        printf("%i\t", bit[3 + 12*j] - '0');
        printf("%i\n", bit[7 + 12*j] - '0');
    }
    printf("\n");
    for (int j = 0; j < k; j++) {
        printf("%i\t", pStern[0 + 4*j]);
        printf("%i\t", pStern[1 + 4*j]);
        printf("%i\t", pStern[2 + 4*j]);
        printf("%i\n", pStern[3 + 4*j]);
    }
    
    //Vergleich von p und p* (p XOR p*) um Syndrom zu berechnen,
	int syndrom[k*4];
    for (int j = 0; j < k; j++) {
        syndrom[0 + 4*j] = bit[0 + 12*j] - '0' - pStern[0 + 4*j];
    	syndrom[1 + 4*j] = bit[1 + 12*j] - '0' - pStern[1 + 4*j];
    	syndrom[2 + 4*j] = bit[3 + 12*j] - '0' - pStern[2 + 4*j];
    	syndrom[3 + 4*j] = bit[7 + 12*j] - '0' - pStern[3 + 4*j];
    }

	//Erroroutput
	for (int j = 0; j < k; j++) {
		for (int l = 0; l < 4; l++) {
			if (syndrom[j*4 + l])
				fprintf(errorOutput, "Bit: %i Paritaet: %i\n", j+1, l+1);
		}
	}
	

    //TODO mit Syndrom Fehlerposition ermitteln und ausbessern, dann ausgeben
	int positionFalscherBit[k];
	for (int j = 0; j < k; j++) {
		positionFalscherBit[j] = 0;
		positionFalscherBit[j] += syndrom[0 + 4*j] * 1;
		positionFalscherBit[j] += syndrom[1 + 4*j] * 2;
		positionFalscherBit[j] += syndrom[2 + 4*j] * 4;
		positionFalscherBit[j] += syndrom[3 + 4*j] * 8;
		fprintf(errorOutput, "Fehlerstelle von bit %i an der Stelle %i\n", j+1, positionFalscherBit[j]);
	}
	
	//Ausgabe korrigierte Version
	for (int j = 0; j < k; j++)
	{
		for (int l = 0; l < 12; l++)
		{
			if (l != 0 && l != 1 && l != 3 && l != 7) {
				if(l == positionFalscherBit[j]-1)
					fprintf(output, "%i", (bit[j*12 + l] == '1' )? 0 : 1);
				else
					fprintf(output, "%c", bit[j*12 + l]);
			}
		}
		
	}
	

    fclose(input);
    fclose(inputK);
    fclose(output);
    fclose(errorOutput);
    return 0;
}