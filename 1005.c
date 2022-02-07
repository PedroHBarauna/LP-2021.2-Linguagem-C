#include <stdio.h>
 
int main() {
 
    float a, b, media, peso1, peso2;
    fflush(stdin);
    scanf("%f", &a);
    scanf("%f", &b);
    
    peso1= a*3.5;
    peso2= b*7.5;
    
    media=(peso1+peso2)/11;
    
    printf("MEDIA = %.5f\n", media);
    
    return 0;
}