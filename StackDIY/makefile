test: main.o stackDIY.o
	gcc -o test main.o stackDIY.o

main.o: main.c
	gcc -c -o main.o main.c

stackDIY.o:
	gcc -c -o stackDIY.o stackDIY.c

clear:
	rm -f *.o

clearall:
	rm -f *.o Test