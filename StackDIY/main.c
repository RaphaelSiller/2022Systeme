#include <stdio.h>
#include "stackDIY.h"

//Testprogramm für die Stackbibliothek
int main(void) {
	int value = 0;
	char modus = '+';
	
	printf("Testprogramm für die Stackbibliothek\n");
	printf("Push oder Pop?");

	do {
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
