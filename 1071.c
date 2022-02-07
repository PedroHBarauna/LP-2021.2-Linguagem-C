#include <stdio.h>
 
int main() {
    
    int num1, num2, soma=0;
    
    scanf("%d", &num1);
    scanf("%d", &num2);
    
    if (num1<num2){
        for (int i=num1+1; i<num2;i++){
            if (i%2!=0){
                soma+=i;
            }    
        }
    }
    else{
        for (int i=num2+1; i<num1;i++){
            if (i%2!=0){
                soma+=i;
            }    
        }
    }
    
    printf("%d\n", soma);
    
    return 0;
}