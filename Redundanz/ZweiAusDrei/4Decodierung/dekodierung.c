#include <stdio.h>
int main(void) {
	int kRead[3];
    int k;
    int i=0;
    FILE *input;
    FILE *inputK;
    FILE *output;
    // FILE *errorOutput;
    input = fopen("../Dateien/output2Feh.txt", "r");
    inputK = fopen("../Dateien/K.txt", "r");
    output = fopen("../Dateien/output3Dec.txt", "w");
    // errorOutput = fopen("../Dateien/errors.txt", "w");
	
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

    for (int j = 0; j < k*24; j+= 3) {
        
		int retBit = 0;
		//Zaehlen der Bits
        if (bit[j] == '1') {
            retBit++;
        } else {
            retBit--;
        }
        
        if (bit[j+1] == '1') {
            retBit++;
        } else {
            retBit--;
        }
        
        if (bit[j+2] == '1') {
            retBit++;
        } else {
        	retBit--;
        }

        //Ausgabe
		if (retBit > 0) {
			fprintf(output, "1");
		}
		else {
			fprintf(output, "0");
		}
		retBit = 0;
    }
    

    fclose(input);
    fclose(inputK);
    fclose(output);
    // fclose(errorOutput);
    return 0;
}