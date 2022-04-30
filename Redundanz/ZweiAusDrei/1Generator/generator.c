#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Generiert einen zufaelligen Byte
int main(void) {
    FILE *output;
    output = fopen("../Dateien/output0Gen.txt", "w");
    FILE *outputK;
    outputK = fopen("../Dateien/K.txt", "w");
    
    int k = 4;
    //scanf("%i", &k);

    srand(time(NULL));
    for(int i = 0; i<8 * k; i++) {
        fprintf(output, rand() % 2 ? "1" : "0");
    }
    fprintf(outputK, "%i", k);

    fclose(output);
    fclose(outputK);
    return 0;
}
