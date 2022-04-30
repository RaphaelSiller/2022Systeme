Test: main.o DIYsnake.o
	gcc -o Test main.o DIYsnake.o

main.o: main.c
	gcc -c -o main.o main.c

DIYsnake.o: DIYsnake.c
	gcc -c -o DIYsnake.o DIYsnake.c

clear:
	rm -f *.o

clearall:
	rm -f *.o Test