#include <stdio.h>
#include "DIYstack.h"
//Testprogramm fuer das Listenmodul. Eingabe muss mit '/' abgebrochen werden
int main(void) {
	int value = 0;
	char modus = '+';
	
	//Stack braucht mindestens zwei Werte in Reserve, ansonsten kommt Segmentation fault.
	stackPush(7);
	stackPush(3);
	stackPush(3);
	stackPush(1);

	printf("Testprogramm für die Stackbibliothek\n");
	do {
		printf("Push oder Pop?");
		printf("Push[+]	Pop[-]	beenden[/]\n");
		scanf(" %c", &modus);

		if (modus == '+') {
			printf("Wert = ");
			scanf(" %i", &value);
			stackPush(value);
		}

		if (modus == '-') {
			value = stackPop();
			printf("Wert = %i\n", value);
		}

	} while (modus != '/');
}
