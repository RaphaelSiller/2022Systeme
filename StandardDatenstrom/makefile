Datenstrom: main.o deutschzahl.o
	gcc -o Datenstrom main.o deutschzahl.o

main.o: main.c
	gcc -c -o main.o main.c

deutschzahl.o: deutschzahl.c
	gcc -c -o deutschzahl.o deutschzahl.c

clean:
	rm -f *.o

cleanall:
	rm -f *.o Datenstrom
