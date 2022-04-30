#include <stdio.h>
#include <time.h>
#include "fib.h"

/**
 * Berechnet die n-te Fibonacci Zahl mit rekursiven Aufruf. Die Ergebnisse werden nicht gespeichert, 
 * d.h. alle Fibonacci-Zahlen bis auf die n-te und (n-1)te werden mehrmals berechnet.
 */
int main(void) {
     	clock_t start, end;
	
	int n;
	printf("Welche Fibonacci-Zahl moechten Sie berechnen?\n");
	scanf(" %i", &n);
     	
	start = clock();
	
	printf("Die %i-te Fibonacci-Zahl ist %i\n", n, fib(n));
     	
	end = clock();
     	cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
	fprintf(stderr, "cpu_time_used = %f", (cpu_time_used));
	
	return 0;
}
