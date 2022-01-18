#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Professor, boa noite! refiz o código do sudoku de uma maneira mais clara, caso possa te enviar também gostaria muito.
//O sudoku com letras, que é o código presente, está com a leitura errada e não consegui arrumar de jeito nenhum. Acho que é um problema no scanf
//A maneira mais fácil que encontrei de verificar a matriz de letras, é transformar de letras, para números, utilizando ascii.
//Obrigado!


//Verificaçao a linha
int verificaLinha(char matriz[9][9]){
    int verif[10] = {0};
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            //pegar o valor e subtrai 64 para pegar o valor ASCII das letras
            verif[matriz[i][j] - 64]++;
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

//verificaçao da coluna
int verificaColuna(char matriz[9][9]){
    int verif[10] = {0};
    for(int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            //pegar o valor e subtrai 64 para pegar o valor ASCII das letras
            verif[matriz[j][i] - 64]++;
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

//verificaçao do cubo
int verificaCubo(char matriz[9][9]){
    int verif[10] = {0};
    //passando de bloco a bloco
    for(int m = 0; m < 9; m += 3){
        for(int n = 0; n < 9; n += 3){
            //passando linha e coluna de bloco a bloco
            for(int i = m; i < m + 3; i++){
                for(int j = n; j < n + 3; j++){
                    verif[matriz[i][j] - 64]++; 
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
    char matriz[9][9];
	int num;
    scanf("%d", &num);
    //leitura da matriz
    for(int k = 1; k <= num; k++){
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                scanf("%c ", &matriz[i][j]);
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
