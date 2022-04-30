#include <stdio.h>
int main(void) {
    int kRead[3];
    int k;
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
    while(fscanf(input, "%c", &bit[i]) != EOF) {
        i++;
    }

    i = 1;
	for (int j = 0; j<k; j++) {
        int bitCounter = 0;
        for (int k = 0; k<8; k++) {
            if (bit[i] == '1')
            bitCounter++;
            fprintf(output, "%c", bit[i]);
            i++;
        }
        //Wenn Anzahl 1 ungerade
        if(bitCounter % 2 == 1){
            fprintf(output, "1");
        } else {
            fprintf(output, "0");
        }
        
    }

    fclose(input);
    fclose(inputK);
    fclose(output);
    return 0;
}
