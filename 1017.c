#include <stdio.h>
 
int calcula(int velo, int tempo){
    float distancia;
    
    distancia= velo*tempo;
    
    return distancia;
} 
 
int main() {
 
    int velo, tempo, distancia;
    float combs;
    scanf("%d %d", &tempo, &velo);
    
    combs=calcula(velo, tempo)/12.0;
    
    printf("%.3f\n", combs);
    return 0;
}