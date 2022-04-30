test: main.o stackDIY.o polyDigit.o
	gcc -o test main.o stackDIY.o polyDigit.o

main.o: main.c
	gcc -c -o main.o main.c

stackDIY.o: stackDIY.c
	gcc -c -o stackDIY.o stackDIY.c

polyDigit.o: polyDigit.c
	gcc -c -o polyDigit.o polyDigit.c

clear:
	rm -f *.o

clearall:
	rm -f *.o test