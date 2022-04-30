#include <stdio.h>
#include "stackDIY.h"
#include "polyDigit.h"

//Simulation eines polnischen Taschenrechners
int main(void) {
	char s[100];
	int i = 0;
	printf("Bitte geben Sie den Ausdruck in Umgekehrter Polnischer Notation ein\n");
	fgets( s, 99, stdin);
	//for (int i = 0; i < sizeof s; i++)
	//	printf("Index = %i \tWert von Array = %i\n", i, s[i]);
	/*
	for (int i = 0; i < sizeof s; i++)
		initDigit(s[i]);

		//Zahl
		if(s[i] >= 48 && s[i] <= 57) {
			stackPush(s[i]);
			printf("stackPush(%i)\n", s[i]);
		//Operation	
		} else {
			int zahl2 = stackPop();
			int zahl1 = stackPop();
			printf("Rechenoperation\nzahl1 = %i \t zahl2 = %i\n", zahl1, zahl2);
			switch(s[i]) {
				case 43: //+
					stackPush(zahl1 + zahl2);
					break;
				case 45: //-
					stackPush(zahl1 - zahl2);
					break;
				case 42: //*
					stackPush(zahl1 * zahl2);
					break;
				case 47: ///
					stackPush(zahl1 / zahl2);
					break;
			}
		}
		i++;
	}
	printf("Ergebnis lautet %i\n", stackPop());
*/
	while(s[i] != 'x') {
		if(s[i] >= 48 && s[i] <= 57) {
			stackPush(polyDigit(i));
		} else {
			if (s[i] != 32) {
				int zahl2 = stackPop();
				int zahl1 = stackPop();
				printf("Rechenoperation\nzahl1 = %i \t zahl2 = %i\n", zahl1, zahl2);
				switch(s[i]) {
					case 43: //+
						stackPush(zahl1 + zahl2);
						break;
					case 45: //-
						stackPush(zahl1 - zahl2);
						break;
					case 42: //*
						stackPush(zahl1 * zahl2);
						break;
					case 47: ///
						stackPush(zahl1 / zahl2);
						break;
				}
			}
		}
		i++;

	}
}
