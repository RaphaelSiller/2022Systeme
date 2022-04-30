#include <stdio.h>
int main(void) {
    int kRead[3];
    int k = 0;
    int i=0;
    FILE *input;
    FILE *inputK;
    FILE *output;
    input = fopen("../Dateien/output0Gen.txt", "r");
    inputK = fopen("../Dateien/K.txt", "r");
    output = fopen("../Dateien/output1Cod.txt", "w");
    
    //Anzahl Byte scannen 
    while(fscanf(inputK, "%i", &kRead[i]) != EOF) {
	k = k*10 + kRead[i];
        i++;
    }

    //printf("k = %i", k);

    char bit[k*8+2];
    //Byte scannen
    for(i = 0; i < k*24; i++) {
        fscanf(input, "%c", &bit[i]);
    }

    i = 1;

	//Berechnung Ausgabe
    int bitOutput[k*12];
	for (int byteNr = 0; byteNr < k; byteNr++) {
		//Paritaet 0
		bitOutput[0 + 12 * byteNr] = (bit[0+8*byteNr] + bit[1+8*byteNr] + bit[3+8*byteNr] + bit[4+8*byteNr] + bit[6+8*byteNr]) % 2;
		//Paritaet 1
		bitOutput[1 + 12 * byteNr] = (bit[0+8*byteNr] + bit[2+8*byteNr] + bit[3+8*byteNr] + bit[5+8*byteNr] + bit[6+8*byteNr]) % 2;
		//Datenbit 0
		bitOutput[2 + 12 * byteNr] = bit[0 + 8 * byteNr] - '0';
		//Paritaet 2
		bitOutput[3 + 12 * byteNr] = (bit[1+8*byteNr] + bit[2+8*byteNr] + bit[3+8*byteNr] + bit[7+8*byteNr]) % 2;
		//Datenbit 1
		bitOutput[4 + 12 * byteNr] = bit[1 + 8 * byteNr] - '0';
		//Datenbit 2
		bitOutput[5 + 12 * byteNr] = bit[2 + 8 * byteNr] - '0';
		//Datenbit 3
		bitOutput[6 + 12 * byteNr] = bit[3 + 8 * byteNr] - '0';
		//Paritaet 3
		bitOutput[7 + 12 * byteNr] = (bit[4+8*byteNr] + bit[5+8*byteNr] + bit[6+8*byteNr] + bit[7+8*byteNr]) % 2;
		//Datenbit 4
		bitOutput[8 + 12 * byteNr] = bit[4 + 8 * byteNr] - '0';
		//Datenbit 5
		bitOutput[9 + 12 * byteNr] = bit[5 + 8 * byteNr] - '0';
		//Datenbit 6
		bitOutput[10 + 12 * byteNr] = bit[6 + 8 * byteNr] - '0';
		//Datenbit 7
		bitOutput[11 + 12 * byteNr] = bit[7 + 8 * byteNr] - '0';
    }
    //Eingabe
	for (int j = 0; j < k*8; j++) {
		printf("%c", bit[j]);
	}
	printf("\n\n");
	//Ausgabe
	for (int j = 0; j < k*12; j++) {
		printf("%i", bitOutput[j]);
		fprintf(output, "%i", bitOutput[j]);
	}
	

    fclose(input);
    fclose(inputK);
    fclose(output);
    return 0;
}