#include <stdio.h>
 
int main() {
 
    float valor, media;
    int contador;
    
    for (int i=0;i<6;i++){
        scanf("%f", &valor);
        if(valor>0){
            contador++;
            media+=valor;
        }
    }
    
    printf("%d valores positivos\n", contador);
    printf("%.1f\n", media/contador);
    return 0;
}