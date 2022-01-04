#include <stdio.h>
#include <stdlib.h>
#define LIN 15
#define COL 9

int main(){
    int **matriz;
    int k, j, l;
    
    //para gerar os numeros aleatórios
    srand(time(0));

    //para as linhas
    matriz=(int**)malloc(LIN*sizeof(int));
    
    //para as colunas
    for (k=0;k<LIN;k++)
        matriz[k]=(int*)malloc(COL*sizeof(int));
        
    for (k=0;k<LIN;k++){
        for (j=0;j<COL;j++){
            matriz[k][j]= rand();
            printf("%d ", matriz[k][j]);
        }
        printf("\n");
    }

    for (k=0;k<LIN;k++)
        free (matriz[k]);
    free (matriz);
    return 0;
}