#include <stdio.h>
 
int main() {
 
    int distancia;
    float combust, total;
 
    scanf("%d", &distancia);
    scanf("%f", &combust);
    
    total=distancia/combust;
 
    printf("%.3f km/l\n", total);
    return 0;
}