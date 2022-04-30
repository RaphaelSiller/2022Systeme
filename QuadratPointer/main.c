#include <stdio.h>
#include "pointer.h" //potenz

//Testprogramm fuer das potenzmodul, welches das Quadrat, Kubik, und n^4 berechnet und diese in die spezifizierten variablen schreibt
int main(void) {
	int n = 0;
	int n2 = 0;
	int n3 = 0;
	int n4 = 0;

	for(n = 0; n<=10; n++) {
		potenz(n, &n2, &n3, &n4);
		printf("%i\t%i\t%i\t%i\n", n, n2, n3, n4);
	}	
	return 0;
}
