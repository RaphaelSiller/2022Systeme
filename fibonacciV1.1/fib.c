#include "fib.h"

fib_t fib(fib_t var) {
	if(var.n <= 2) {
		var.n1=1;
		var.n2=1;
	} else {
		var.n--;
		var = fib(var);
		
	} 
	return var;
}
