
Test: main.o dice.o #pwdgntr.o
	gcc -o Test main.o dice.o #pwdgntr.o

main.o: main.c
	gcc -c -o main.o main.c

dice.o: dice.c
	gcc -c -o dice.o dice.c

#pwdgnrt: pwdgnrt.c
#	gcc -c -o pwdgnrt.o pwdgnrt.c

clear:
	rm -f *.o

clearall:
	rm -f *.o Test
