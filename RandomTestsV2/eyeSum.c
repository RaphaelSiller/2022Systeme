#include "dice.h"
int eyeSum(int nWuerfel) {
	int ret = 0;
	for (int i = 0; i < nWuerfel; i++) {
		ret += dice(6, 0, 1);
	}
	return ret;
}
