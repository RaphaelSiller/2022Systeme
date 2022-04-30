#include "fib.h"

void clearFib(void) {
	knownFib[1] = 1;
	knownFib[2] = 1;
	
	for (int i = 3; i < 88; i++) {
		knownFib[i] = 0;
	} 
}

long int fib(int n) {
	if (knownFib[n] ==0 ) {
		knownFib[n] = fib(n-1) + fib(n-2);
	}
	return knownFib[n];
}
