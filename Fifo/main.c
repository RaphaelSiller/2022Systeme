#include <stdio.h>
#include "DIYsnake.h"

//Testprogramm für die Fifobibliothek
int main(void) {
	int value = 0;
	char modus = '+';
	
	stackPush(0);
	stackPush(0);
	stackPush(0);
	printf("Testprogramm für die Fifobibliothek\n");
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
