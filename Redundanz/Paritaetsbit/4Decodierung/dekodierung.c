#include <stdio.h>
int main(void) {
	int kRead[3];
    int k;
    int i=0;
    FILE *input;
    FILE *inputK;
    // FILE *output;
    FILE *errorOutput;
    input = fopen("../Dateien/output2Feh.txt", "r");
    inputK = fopen("../Dateien/K.txt", "r");
    errorOutput = fopen("../Dateien/errors.txt", "w");
    
     //Anzahl Byte scannen 
    while(fscanf(inputK, "%i", &kRead[i]) != EOF) {
	k = k*10 + kRead[i];
        i++;
    }

    //printf("k = %i", k);

    char bit[k*9 + 1];
    //Byte scannen
    while(fscanf(input, "%c", &bit[i]) != EOF) {
        i++;
    }

    int isError = 0;
    i = 1;
    for (int j = 0; j < k; j++) {   
        int bitCounter = 0;
        for (int k = 0; k < 9; k++) {
            if(bit[i] == '1')
                bitCounter++;
            i++;
        }
        if (bitCounter % 2 != 0) {
            fprintf(errorOutput, "Fehler bei byte %i\n", (j + 1));
            isError = 1;
        }
    }

    if(isError == 0)
        fprintf(errorOutput, "kein Fehler");
    

    fclose(input);
    fclose(inputK);
    fclose(errorOutput);
    return 0;
}