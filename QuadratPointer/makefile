QuadratPointer: main.o pointer.o
	gcc -o QuadratPointer main.o pointer.o

main.o: main.c
	gcc -c -o main.o main.c

pointer.o: pointer.c
	gcc -c -o pointer.o pointer.c

clear:
	rm -f *.o

clearall:
	rm -f *.o QuadratPointer
