#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int verificaLinha(char matriz[9][9]){
    int i, j, cont, aux1=0, aux2=0, k, verif[10] = {0,0,0,0,0,0,0,0,0,0};
    for(i = 0; i < 9; i++){
        for(j = 0; j < 9; j++){
            aux1=matriz[i][j]-64;
            verif[aux1]+=1;
        }
    for(k=1;k<=9;k++){
        if(verif[k]==1){
            aux2++;
        }
        else{
            return 0;
        }
    }
    if(aux2!=9){
        return 0;
    }
    for(cont = 0; cont < 10; cont++) verif[cont] = 0;
    aux2 = 0;
    }
    return 1;
}

int verificaColuna(char matriz[9][9]){
    int i, j, cont, aux1=0, aux2=0, k, verif[10] = {0,0,0,0,0,0,0,0,0,0};
    for(i = 0; i < 9; i++){
        for (j = 0; j < 9; j++){
            aux1=matriz[j][i]-64;
                verif[aux1]+=1;
        }
    for(k=1;k<=9;k++){
        if(verif[k]==1){
            aux2++;
        }
        else{
            return 0;
        }
    }
    if(aux2!=9){
        return 0;
    }
    for(cont = 0; cont < 10; cont++) verif[cont] = 0;
    aux2 = 0;
    }
    return 1;
}

int verificaCubo(char matriz[9][9]){
    int i, j, m, n, cont, aux1=0, aux2=0, k, verif[10] = {0,0,0,0,0,0,0,0,0,0};
    for(m = 0; m < 9; m += 3){
        for(n = 0; n < 9; n += 3){
            for(i = m; i < m + 3; i++){
                for(j = n; j < n + 3; j++){
                    aux1= matriz[i][j]-64;
                        verif[aux1]+=1;
                }
            }
            for(k=1;k<=9;k++){
                if(verif[k]==1){
                    aux2++;
                }
                else{
                    return 0;
                }
            }
            if(aux2!=9){
                return 0;
            }

            for(cont = 0; cont < 10; cont++) verif[cont] = 0;
            aux2 = 0;
        }
    }
        return 1;
}

int main(){
    char matriz[9][9];
	int num, k, i, j;
    scanf("%d", &num);

    for(k = 1; k <= num; k++){
        for(i = 0; i < 9; i++){
            for(j = 0; j < 9; j++){
                scanf(" %c", &matriz[i][j]);
            }
        }

        printf("Instancia %d\n", k);

        if(verificaLinha(matriz) == 1)
        {
            if(verificaColuna(matriz) == 1)
            {
                if(verificaCubo(matriz) == 1)
                    printf("SIM\n\n");
                else
                    printf("NAO\n\n");
            }
            else{
                printf("NAO\n\n");
            }
        
        }
        else{
            printf("NAO\n\n");
        }

    }
    return 0;
}
