Test: main.o swap.o
	gcc -o Test main.o swap.o

main.o: main.c
	gcc -c -o main.o main.c

swap.o: swap.c
	gcc -c -o swap.o swap.c

clear:
	rm -f *.o

clearall:
	rm -f *.o Test