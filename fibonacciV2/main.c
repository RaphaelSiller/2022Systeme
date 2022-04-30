#include <stdio.h>
#include <time.h>
#include "fib.h"

/**
 * Berechnet die n-te Fibonacci Zahl mit rekursiven Aufruf. Hier werden alle Ergebnisse in einem globalen Array gespeichert,
 */
int main(void) {
     	clock_t start, end;
	
	int n;
	printf("Welche Fibonacci-Zahl moechten Sie berechnen?\n");
	scanf(" %i", &n);
     	
	clearFib();
	printf("knownFib[1] = %ld\n", knownFib[1]);
	printf("knownFib[2] = %ld\n", knownFib[2]);
	start = clock();
	printf("Die %i-te Fibonacci-Zahl ist %ld\n", n, fib(n));
     	
	
	end = clock();
     	cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
	fprintf(stderr, "cpu_time_used = %f\n", (cpu_time_used));
	
	return 0;
}
