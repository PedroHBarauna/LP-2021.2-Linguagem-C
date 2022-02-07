#include <stdio.h>
 
int main() {
 
    float a, b, c, media, peso1, peso2, peso3;
    fflush(stdin);
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    
    
    peso1= a*2;
    peso2= b*3;
    peso3= c*5;
    
    media=(peso1+peso2+peso3)/10;
    
    printf("MEDIA = %.1f\n", media);
    
    return 0;
}