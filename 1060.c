#include <stdio.h>
 
int main() {
 
    float valor;
    int contador;
    
    for (int i=0;i<6;i++){
        scanf("%f", &valor);
        if(valor>0){
            contador++;
        }
    }
    
    printf("%d valores positivos\n", contador);
 
    return 0;
}