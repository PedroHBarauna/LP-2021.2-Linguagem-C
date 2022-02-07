#include <stdio.h>
 
int main() {
 
    float num;
    
    scanf("%f", &num);
    
    if(num<=25.0000 &&num>=0){
        printf("Intervalo [0,25]\n");
    }
    else{
        if(num>25.0000 && num<=50.0000){
           printf("Intervalo (25,50]\n"); 
        }
        else{
            if(num>50.0000 && num<=75.0000){
                printf("Intervalo (50,75]\n");
            }
            else{
                if(num>75.0000 && num<=100.0000){
                    printf("Intervalo (75,100]\n");
                }
                else{
                    printf("Fora de intervalo\n");
                }
            }
        }
    }
    return 0;
}