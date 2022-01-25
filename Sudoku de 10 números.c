#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//verifica linha
int verificaLinha(int matriz[9][9]){
    int aux1=0, aux2=0, k, verif[11] = {0,0,0,0,0,0,0,0,0,0,0};
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            aux1=matriz[i][j];
            //adiciona +1 para a posição da matriz, caso esteja repetida será invalidada
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
    for(int cont = 0; cont < 10; cont++) verif[cont] = 0;
    aux2 = 0;
    }
    return 1;
}
//verifica coluna
int verificaColuna(int matriz[9][9]){
    int aux1=0, aux2=0, k, verif[11] = {0,0,0,0,0,0,0,0,0,0,0};
    for(int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            aux1=matriz[j][i];
            //adiciona +1 para a posição da matriz, caso esteja repetida será invalidada
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
    for(int cont = 0; cont < 10; cont++) verif[cont] = 0;
    aux2 = 0;
    }
    return 1;
}
//verifica cubo
int verificaCubo(int matriz[9][9]){
    int aux1=0, aux2=0, k, verif[11] = {0,0,0,0,0,0,0,0,0,0,0};
    //passa de cubo em cubo
    for(int m = 0; m < 9; m += 3){
        for(int n = 0; n < 9; n += 3){
            //linha e coluna 
            for(int i = m; i < m + 3; i++){
                for(int j = n; j < n + 3; j++){
                    aux1= matriz[i][j];
                    //adiciona +1 para a posição da matriz, caso esteja repetida será invalidada
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

            for(int cont = 0; cont < 10; cont++) verif[cont] = 0;
            aux2 = 0;
        }
    }
        return 1;
}

int main(){
    int matriz[9][9];
	int num;
    scanf("%d", &num);

    for(int k = 1; k <= num; k++){
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                scanf("%d", &matriz[i][j]);
            }
        }

        printf("Instancia %d\n", k);

        if(verificaLinha(matriz) == 1)
        {
            if(verificaColuna(matriz) == 1)
            {
                if(verificaCubo(matriz) == 1)
                    printf("SIM\n");
                else
                    printf("NAO\n");
            }
            else{
                printf("NAO\n");
            }
        
        }
        else{
            printf("NAO\n");
        }

    }
    return 0;
}

}

