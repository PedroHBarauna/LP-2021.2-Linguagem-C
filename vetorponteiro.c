#include <stdio.h>
#include <stdlib.h>

int main(){
    int *vetor;
    int k;
    vetor=(int*)malloc(5000*sizeof(int));
    for (k=0;k<5000;k++){
        vetor[k]=k;
        printf("%d \n", vetor);
    }

    free(vetor);
    return 0;
}