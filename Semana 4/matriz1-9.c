#include <stdio.h>
#define M 2
#define N 2

int main(){
    int matriz[M][N];
    int a, b, contador;
    contador=0;
    for (a=0;a<=M;a++){
        for (b=0;b<=N;b++){
            contador++;
            matriz[a][b]=contador;
            printf("%d ", matriz[a][b]);
        }
        printf("\n");
    }
}