#include <stdio.h>
#include "DIYstack.h"

/*
 * Benutzt die uebergebenen Argumente beim Aufruf des Programs und 
 * "uebergibt" diese einem polnischen Taschenrechner(Zahl1 Zahl2 Rechenoperation). Aufruf muss mit x aufhoeren
 */
int main(void) {
	char s[100];
	int printIndex = 0;
	int i = 0;
	int zahl = 0;
	//Eingabe
	printf("Bitte geben Sie den Ausdruck in Umgekehrter Polnischer Notation ein\n");
	fgets( s, 99, stdin);
	//for (int i = 0; i < sizeof s; i++)
	//	printf("Index = %i \tWert von Array = %i\n", i, s[i]);

	//x steht fuer Ende des Aufrufs
	while(s[i] != 'x') {
		if(s[i] >= 48 && s[i] <= 57) { //Wenn Zahl eingegeben wurde
			//fprintf(stderr, "Got this far %i\n", printIndex = printIndex+1);
			zahl = zahl*10 + s[i]-48;
			stackPush(zahl);
		} else {
			zahl = 0;
			if (s[i] != 32) { //Wenn rechenoperation eingegeben wurde
				int zahl1 = stackPop();
				//fprintf(stderr, "Got this far %i after zahl1\n", printIndex = printIndex+1);
				int zahl2 = stackPop();
				//fprintf(stderr, "Got this far %i after zahl1\n", printIndex = printIndex+1);
				printf("Rechenoperation\nzahl1 = %i \t zahl2 = %i\n", zahl1, zahl2);
				switch(s[i]) {
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
		i++;

	}
	printf("Ergebnis lautet %i\n", stackPop());
}
