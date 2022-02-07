#include <stdio.h>
 
int main() {
 
    int valor, contadorp=0, contadori=0, contadorpos=0, contadorneg=0;
    for (int i=0;i<5;i++){
        scanf("%d", &valor);
        if(valor%2==0){
            contadorp++;
        }
        else{
            contadori++;
        }
        if(valor>0){
            contadorpos++;
        }
        else if(valor<0){
            contadorneg++;
        }        
    }
    
    printf("%d valor(es) par(es)\n", contadorp);
    printf("%d valor(es) impar(es)\n", contadori);
    printf("%d valor(es) positivo(s)\n", contadorpos);
    printf("%d valor(es) negativo(s)\n", contadorneg);
    return 0;
}