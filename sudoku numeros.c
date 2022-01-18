#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int verificaLinha(int matriz[9][9]){
    int verif[10] = {0};
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            verif[matriz[i][j]]++;
        }
        for(int k = 1; k <= 9; k++){
            if(verif[k] != 1){
                return 0;
            }
            for(k = 1; k <= 9; k++){
                verif[k] = 0;
            }
        }
    }
    return 1;
}

int verificaColuna(int matriz[9][9]){
    int verif[10] = {0};
    for(int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            verif[matriz[j][i]]++;
        }
        for(int k = 1; k <= 9; k++){
            if(verif[k] != 1){
                return 0;
            }
            for (k = 1; k <= 9; k++){
                verif[k] = 0;
            }
        }
    }
    return 1;
}

int verificaCubo(int matriz[9][9]){
    int verif[10] = {0};
    for(int m = 0; m < 9; m += 3){
        for(int n = 0; n < 9; n += 3){
            for(int i = m; i < m + 3; i++){
                for(int j = n; j < n + 3; j++){
                    verif[matriz[i][j]]++;
                }
            }
            for(int k = 1; k <= 9; k++){
                if(verif[k] != 1){
                    return 0;
                }
                for(k = 1; k <= 9; k++){
                    verif[k] = 0;
                }
            }
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
        
        if(verificaLinha(matriz) == 1 && verificaColuna(matriz) == 1 && verificaCubo(matriz) == 1)
            printf("SIM\n");
        else
            printf("NAO\n");   
    }
    return 0;
}
