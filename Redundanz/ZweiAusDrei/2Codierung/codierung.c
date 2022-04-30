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

    char bit[4*24+2];
    //Byte scannen
    for(i = 0; i < 4*24; i++) {
        fscanf(input, "%c", &bit[i]);
    }

    i = 1;
	for (int j = 0; j<4*24; j++) {
        int outputBit = bit[j] - '0';
        if(outputBit == 0 || outputBit == 1) {
            fprintf(output, "%i", outputBit);
            fprintf(output, "%i", outputBit);
            fprintf(output, "%i", outputBit);
            // fprintf(stderr, "\n\tj = %i\n", j);
        }
    }

    fclose(input);
    fclose(inputK);
    fclose(output);
    return 0;
}