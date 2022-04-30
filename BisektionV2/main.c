//Intervallhalbierung mit der Formel f(x) = e^x +1 − x^2 mit kleinen Veraenderungen
#include <stdio.h>
#include <math.h>
#include "gerade.h"
#include "funktionx.h"

int main(void) {

	double a;
	double b;
	double m;
	double fa;
	double fb;
	double fm;
	double k; //Steigung

	printf("Bitte geben Sie den Wert für a und b ein\n");
	printf("Bitte beachten Sie, dass die Funktion überall definiert und stetig ist\n");

	//Eingabe
	printf("a= ");
	scanf(" %lf", &a);
	printf("b= ");
	scanf(" %lf", &b);
	
	//Verarbeitung
	while(1 == 1 /*fabs(a-m) > 0.0000001*/) {	
		fa = funktionx(a);
       		fb = funktionx(b);
		m = g(a, b, fa, fb);
		fm = funktionx(m);
		//a wird ersetzt
		if (a*m > 0){
			a = m;
		} else { //b wird ersetzt
			b = m;
		}

	//}
	printf("Die Nullstelle beträgt: %lf\n", m); 
	} 
	return 0;
}

/*

double g(double x1, double x2, double y1, double y2) {

        double k = (y2 - y1) / (x2 - x1);
        double d = y1 - (k * x1);
        double g = -d/k;
        return g;
}

#include <math.h>

double funktionx(double x) {
        return ( exp(x) +1 -(x*x));
}
 */
