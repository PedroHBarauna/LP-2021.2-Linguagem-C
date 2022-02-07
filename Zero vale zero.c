#include <stdio.h>
#include <string.h>

int main(){
    int x, y, soma, i;
    int tamanho;
    tamanho=5;
    char vetor[soma];
    while (x!=0 && y!=0){
        scanf("%d", &x);
        scanf("%d", &y);
        if(x==0&&y==0){
            break;
        }
        soma = x+y;
        tamanho+=strlen(vetor);
        sprintf(vetor,"%d",soma);
        for(i=0;i<tamanho;i++){
            if(vetor[i]!='0'){
                printf("%c", vetor[i]);
            }
            
        }
        printf("\n");
    }
    
    return 0;
}