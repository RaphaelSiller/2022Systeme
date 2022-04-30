/*
argc_argv.c 
Es wird die Verwendung der Schnittstelle der aufrufenden Umgebung (Befehlszeile) zum Programm gezeigt

Autor: Der Bortige
Lizenz: GPLv3
Datum: 31.01.2021
*/
#include <stdio.h>
#include "DIYstack.h"

/*
argc: Anzahl der Elemente auf der Befehlszeile, der Programmaufruf wird mitgezählt, also ist argc um 1 höher als die Anzahl der Argumente
argv: Feld von Zeigern auf char. Die Zeiger zeigen auf die einzelnen übergebenen Elemente auf der Befehlszeile. argv[0] ist der Programmaufruf, mit argv[1] beginnen die Argumente. Nach dem letzen Argument filgt dann ein NULL
*/
int main(int argc, char *argv[]) {
	int printIndex = 0;
	int zahl = 0;
  int i = 0;
  printf("argc=%i\n", argc);
  for(i = 0; argv[i]; i++) {
    printf("argv[%i]=%s - %p\n", i, argv[i], argv[i]);
  }  
  printf("argv[%i]=%s - %p\n", i, argv[i], argv[i]);



	for(int j = 1; j < argc; j++) {
		for(int k = 0; k<sizeof argv[j] -1;k++)
		if(argv[j][k] >= 48 && argv[j][k] <= 57) {
			fprintf(stderr, "Got this far %i\n", printIndex = printIndex+1);
			zahl = zahl*10 + argv[j][k]-48;
			fprintf(stderr, "Got this far %i\t zahl=%i\n", printIndex = printIndex+1, zahl);
			stackPush(zahl);
			fprintf(stderr, "Got this far %i\n", printIndex = printIndex+1);
		} else {
			zahl = 0;
			if (argv[j][k] != 32) {
				int zahl1 = stackPop();
				fprintf(stderr, "Got this far %i after zahl1\n", printIndex = printIndex+1);
				int zahl2 = stackPop();
				//fprintf(stderr, "Got this far %i after zahl1\n", printIndex = printIndex+1);
				printf("Rechenoperation\nzahl1 = %i \t zahl2 = %i\n", zahl1, zahl2);
				switch(argv[j][k]) {
					case 43: //+
						stackPush(zahl1 + zahl2);
						break;
					case 45: //-
						stackPush(zahl2 - zahl1);
						break;
					case 42: //*
						stackPush(zahl1 * zahl2);
						break;
					case 47: ///
						stackPush(zahl2 / zahl1);
						break;
				}
			//fprintf(stderr, "Got this far %i\n", printIndex = printIndex+1);
			}
		}
	}
	printf("Ergebnis lautet %i\n", stackPop());

  return 0;
}

