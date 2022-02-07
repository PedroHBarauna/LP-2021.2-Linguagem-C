#include <stdio.h>
 
int main() {
 
    float a, b, c, perimetro, area;
    
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    
    if(a>b && a>c){
        if(b+c>a){
            perimetro=a+b+c;
            printf("Perimetro = %.1f\n", perimetro);
        }
        else{
            area=(a+b)*c/2;
            printf("Area = %.1f\n", area);
        }
    }
    else{
        if(b>a && b>c){
            if(a+c>b){
                perimetro=a+b+c;
                printf("Perimetro = %.1f\n", perimetro);
            }
            else{
                area=(a+b)*c/2;
                printf("Area = %.1f\n", area);
            }
        }
        else{
            if(c>b && c>a){
                if(a+b>c){
                    perimetro=a+b+c;
                    printf("Perimetro = %.1f\n", perimetro);
                }
                else{
                    area=(a+b)*c/2;
                    printf("Area = %.1f\n", area);
                }
            }
        }
    }
    if (a==b && b==c){
        if (b==c){
            perimetro=a+b+c;
            printf("Perimetro = %.1f\n", perimetro);
        }
    }
    else{
        if (b==a && b==c){
            if (a==c){
                perimetro=a+b+c;
                printf("Perimetro = %.1f\n", perimetro);
            }
        }
        else{
            if (c==b && c==a){
                if (a==b){
                    perimetro=a+b+c;
                    printf("Perimetro = %.1f\n", perimetro);
                }
            }            
        }
    }
    return 0;
}