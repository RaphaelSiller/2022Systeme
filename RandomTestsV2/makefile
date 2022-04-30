
Test: main.o dice.o eyeSum.o
	gcc -o Test main.o dice.o eyeSum.o

main.o: main.c
	gcc -c -o main.o main.c

dice.o: dice.c
	gcc -c -o dice.o dice.c

eyeSum.o: eyeSum.c
	gcc -c -o eyeSum.o eyeSum.c

clear:
	rm -f *.o

clearall:
	rm -f *.o Test
