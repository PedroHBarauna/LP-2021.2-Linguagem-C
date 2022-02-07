#include <stdio.h>

int main() {
    double total, raio, pi;
    pi=3.14159;
    scanf("%lf", &raio);
    
    total= (4/3.0)*pi*raio*raio*raio;
    printf("VOLUME = %.3lf\n", total);
}