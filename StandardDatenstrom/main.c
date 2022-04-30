#include <stdio.h>
#include "deutschzahl.h"
//Gibt alle Zahlen von 1 bis 100 in einem ausgeschriebenen Format aus
int main(void) {
	printf("eins\n");
	for (int i = 2; i<=100; i++) {
		//Ausnahmefall elf bis neunzehn, hundert
		if (i == 10 || i == 100) {
			if (i == 10) {
				printf("zehn\nelf\nzwölf\ndreizehn\nvierzehn\nfünfzehn\nsechzehn\nsiebzehn\nachtzehn\nneunzehn");
				i = 20;
			} else
				printf("hundert");
		} else { //Normalfall
			if (i>10) {
				//printf("ziffer %i\t\t", i);
				deutschzahl(1, i%10);
				if (i%10 != 0)
					printf("und");
				deutschzahl(2, i/10);
			} else
				deutschzahl(1, i);
		}
		printf("\n");
	}
}
