#include <stdio.h>
#include <time.h>
#include "fib.h"

/**
 * Berechnet die n-te Fibonacci Zahl mit rekursiven Aufruf. Hier werden die letzten 2 Ergebnisse werden im struct fibonacci_s gespeichert,
 */
int main(void) {
     	clock_t start, end;
	
	
	fib_t var;
	printf("Welche Fibonacci-Zahl moechten Sie berechnen?\n");
	scanf(" %i", var.n);
     	
	start = clock();
	var = fib(var);
	printf("Die %i-te Fibonacci-Zahl ist %ld\n", var.n, var.n1);
     	
	
	end = clock();
     	cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
	fprintf(stderr, "cpu_time_used = %f\n", (cpu_time_used));
	
	return 0;
}
