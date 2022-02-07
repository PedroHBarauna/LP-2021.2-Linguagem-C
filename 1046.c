#include <stdio.h>
 
int main() {

    int hi, hf, total;
    
    scanf("%d",&hi);
    scanf("%d",&hf);
    
    if(hi>hf){
        total=24- (hi-hf);
        printf("O JOGO DUROU %d HORA(S)\n", total);
    }
    else{
        if(hf>hi){
            total=hf-hi;
            printf("O JOGO DUROU %d HORA(S)\n", total);
        }
        else{
            printf("O JOGO DUROU 24 HORA(S)\n");
        }
    }
 
    return 0;
}