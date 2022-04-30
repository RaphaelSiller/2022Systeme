#include <stdio.h>
#include "swap.h"

//Test fuer das Swapmodul
int main(void) {
	int zahl1 = 3;
	int zahl2 = 6;
	
	printf("vor swap\n");
	printf("zahl1 = %i\n", zahl1);
	printf("zahl2 = %i\n", zahl2);
	
	swap(&zahl1, &zahl2);
	
	printf("\nnach swap\n");
	printf("zahl1 = %i\n", zahl1);
        printf("zahl2 = %i\n", zahl2);
	
	return 1;
}
