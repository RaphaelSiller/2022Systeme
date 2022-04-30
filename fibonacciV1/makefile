Fibonacci: main.o fib.o
	gcc -o Fibonacci main.o fib.o

main.o: main.c
	gcc -c -o main.o main.c

fib.o: fib.c
	gcc -c -o fib.o fib.c

clear:
	rm -f *.o

clearall:
	rm -f *.o Fibonacci