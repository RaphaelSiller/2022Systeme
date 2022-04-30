#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
	int kRead[3];
    int k = 0;
    int i=0;
    FILE *input;
    FILE *inputK;
    FILE *output;
    input = fopen("../Dateien/output1Cod.txt", "r");
    inputK = fopen("../Dateien/K.txt", "r");
    output = fopen("../Dateien/output2Feh.txt", "w");
    
     //Anzahl Byte scannen 
    while(fscanf(inputK, "%i", &kRead[i]) != EOF) {
	k = k*10 + kRead[i];
        i++;
    }

    //printf("k = %i", k);

    char bit[k*24 + 1];
    //Byte scannen
    while(fscanf(input, "%c", &bit[i]) != EOF) {
        i++;
    }

    srand(time(NULL));
    //Aenderung des Bits bei einer Wahrscheinlichkeit von 1 zu 256
    for (int j = 1; j < sizeof bit; j++) {
        if(rand() % 32 == 1) {
            (bit[j] == '0') ? (fprintf(output, "1")) : (fprintf(output, "0"));
        } else
            fprintf(output, "%c", bit[j]);
    }
    

    fclose(input);
    fclose(inputK);
    fclose(output);
    return 0;
}
