Bisektion: main.o funktionx.o gerade.o
	gcc -o Bisektion main.o funktionx.o gerade.o -lm

main.o: main.c
	gcc -c -o main.o main.c -lm

funktionx.o: funktionx.c funktionx.h
	gcc -c -o funktionx.o funktionx.c -lm

gerade.o: gerade.c gerade.h
	gcc -c -o gerade.o gerade.c -lm

clear:
	rm -f *.o

clearall:
	rm -f *.o Bisektion
