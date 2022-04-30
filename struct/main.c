#include <stdio.h>
#include "vektorMethoden.h"

//Testprogramm fuer das Vektormethodenmodul
int main(void) {
	//VektorSumme
	vector_t v1, v2, vSum;
	v1.x = 5.0; 
	v1.y = 3.3;
	v2.x = 8.1;
	v2.y = 12.7;
	vSum = vectorSum( v1, v2);
	printf("VektorSumme\nvSum.x = %f\tvSum.y = %f\n", vSum.x, vSum.y);
	
	//VektorSkalierung
	int k;
	vSum.x = 0;
	vSum.y = 0;
	
	v1.x = 5.0; 
	v1.y = 3.3;
	k = 2;
	vSum = vectorScale( k, v1);
	printf("VektorSkalierung\nvSum.x = %f\tvSum.y = %f\n", vSum.x, vSum.y);

	return 0;
}
