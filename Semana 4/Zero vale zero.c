#include <stdio.h>
#include <string.h>

int main(){
    int x, y, soma, tamanho;
    char vetor[soma];
    while (x!=0 && y!=0){
        scanf("%d", &x);
        scanf("%d", &y);
        if(x==0&&y==0){
            break;
        }
        soma = x+y;
        sprintf(vetor,"%d",soma);
        
    }
    
    return 0;
}