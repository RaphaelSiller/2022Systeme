#include <stdlib.h>
int dice(int maxrange, int offset, int nWuerfe) {
	int ret;
	
	for(int i = 0; i < nWuerfe; i++) {
		ret = rand() % 2 == 0 ? ret + rand() : ret - rand();
	}

	//In maxrange bringen
	if (ret < 0)
		ret *= -1;
	while (ret > maxrange)
		ret -= maxrange;

	return ret;
}
