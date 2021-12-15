#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
    int *vetor;
    int i, x, y;
    x=5000;
    y=0;
    for (i=0;i<x;i++){
        vetor=malloc(x*sizeof(int));
        vetor[i]=y;
        y++;
        printf("%d \n", vetor[i]);
    }

    free()
}