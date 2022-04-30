#include <stdio.h>
	/*static*/ int stack[100];
	
	//Gibt den letzten freien Index an
	/*static*/ int lastIndex /*I gave you my array*/ = 10;

void stackPush(int value) {
//	fprintf(stderr, "Wert: \n", i, value);
	stack[lastIndex] = value;
	lastIndex++;
}


int stackPop(void) {
	int ret = 0;
	ret = stack[lastIndex-1];
//	fprintf(stderr, "Wert %i ret %i\n", stack[lastIndex-1], ret);
	stack[lastIndex-1] = 0;
	lastIndex--;
	return ret;
}
