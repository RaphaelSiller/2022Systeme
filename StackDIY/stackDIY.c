
static int stack[100];

static int lastIndex /*I gave you my array*/ = 0;


void stackPush(int value) {
	
	stack[lastIndex] = value;
	lastIndex++;
}



int stackPop(void) {
	int ret = 0;
	ret = stack[lastIndex-1];
	stack[lastIndex-1] = 0;
	lastIndex--;
	return ret;
}
