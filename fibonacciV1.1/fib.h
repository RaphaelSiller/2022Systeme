typedef
struct fibonacci_s {
	int n; //wievielte fibonnaci zahl
	long int n1; //Fibonacci von n
	long int n2; //Fibonacci von n-1
} fib_t;

double cpu_time_used;

fib_t fib(fib_t var);
