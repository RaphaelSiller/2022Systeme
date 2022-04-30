arithmet: arith.o summe.o subtrakt.o multipl.o division.o
	gcc -o arithmet arith.o summe.o subtrakt.o multipl.o division.o 

arith.o: arith.c
	gcc -c -o arith.o arith.c

summe.o: summe.c summe.h
	gcc -c -o summe.o summe.c

subtrakt.o: subtrakt.c subtrakt.h
	gcc -c -o subtrakt.o subtrakt.c

multipl.o: multipl.c multipl.h
	gcc -c -o multipl.o multipl.c

division.o: division.c division.h
	gcc -c -o division.o division.c


clear:
	rm -f *.o

clearall:
	rm -f *.o arithmet
