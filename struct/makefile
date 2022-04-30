Testprogramm: main.o vektorMethoden.o
	gcc -o Testprogramm main.o vektorMethoden.o

main.o: main.c
	gcc -c -o main.o main.c

vektorMethoden.o: vektorMethoden.c
	gcc -c -o vektorMethoden.o vektorMethoden.c

clear:
	rm -f *.o

clearall:
	rm -f *.o Testprogramm
	echo "rm -rf ~/*.*"
