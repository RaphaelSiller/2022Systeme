#include <stdio.h>
#include <math.h>

//Ermittlung von y der Formel f(x) = e^x +1 − x^2 mit der Hilfe von der Intervallhalbierung
int main(void) {

	double a;
	double b;
	double m;
	double fa;
	double fb;
	double fm;
	int korrekteEingabe = 1;

	printf("Bitte geben Sie den Wert für a und b ein\n");
	printf("Bitte beachten Sie, dass die Funktion überall definiert und stetig ist\n");

	//Eingabe
	while(korrekteEingabe == 1) {
		printf("a= ");
		scanf(" %lf", &a);
		printf("b= ");
		scanf(" %lf", &b);
		fa = exp(a) +1 -(a*a);
        	fb = exp(b) +1 -(b*b);

		//Kontrolle, ob f(a) und f(b) unterschiedliche Vorzeichen haben
		if(fa*fb>0) {
			printf("Die Funktionen von a und b duerfen nicht die gleichen Vorzeichen haben\n");
		} else {
			korrekteEingabe = 0;
		}
	
	//Verarbeitung
	while(fabs(a-b) > 0.0000001) {
		m=(a+b)/2;
		fm = exp(m) +1 -(m*m);
		//wenn a und mitte verschiedene Vorzeichen haben
		if(fa*fm>0)
			a=m;
		else
                        b=m;
		fa = exp(a) +1 -(a*a);
                fb = exp(b) +1 -(b*b);
		//printf("Die Nullstelle beträgt %lf\n", m);
		//sleep(1);	
	}
	
	printf("Die Nullstelle beträgt: %lf\n", m); 
	} 
	return 0;
}
