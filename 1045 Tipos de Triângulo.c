#include <stdio.h>
#include <math.h>
int main() {

	double l1, l2, l3, sup;
	scanf("%lf", &l1);
	scanf("%lf", &l2);
	scanf("%lf", &l3);
	if (l2>l1 && l2>l3){
	    sup=0;
	    sup=l2;
	    l2=l1;
	    l1=sup;
	}
	if(l3>l1 && l3>l2){
	    sup=0;
	    sup=l3;
	    l3=l1;
	    l1=sup;
	}
	if (l3>l2){
	    sup=0;
	    sup=l3;
	    l3=l2;
	    l2=sup;
	}
	
	if (l1>=(l2+l3)||l1<=0||l2<=0||l3<=0){
		printf("NAO FORMA TRIANGULO\n");
	}	
	else {
		if ((l1*l1)==((l2*l2)+(l3*l3))){
			printf("TRIANGULO RETANGULO\n");
		}
		else{ 
		    if((l1*l1)>((l2*l2)+(l3*l3))){
				printf("TRIANGULO OBTUSANGULO\n");
		    }
            else{
                if ((l1*l1) < (l2*l2) +(l3*l3)){
                    printf ("TRIANGULO ACUTANGULO\n");
                }
            }
		}
	}
	if (l1==l2 && l2==l3){
	    printf ("TRIANGULO EQUILATERO\n");
	}
	else{
	    if (l1==l2 || l2==l3){
	        printf ("TRIANGULO ISOSCELES\n");
	    }
	}
	
    return 0;
}