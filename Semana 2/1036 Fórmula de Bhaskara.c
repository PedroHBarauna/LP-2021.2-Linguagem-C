#include <stdio.h>
#include <math.h>
int main() {

	double n1, n2, n3, delta, r1, r2;
	scanf("%lf", &n1);
	scanf("%lf", &n2);
	scanf("%lf", &n3);
	delta = (n2*n2)-(4*n1*n3);
	if (delta<0 || n1==0){
		printf("Impossivel calcular\n");
	}	
	else {
		r1= (-n2+sqrt(delta))/(2*n1);
		r2= (-n2-sqrt(delta))/(2*n1);
		printf("R1 = %.5lf\n", r1);
		printf("R2 = %.5lf\n", r2);
	}
	
    return 0;
}