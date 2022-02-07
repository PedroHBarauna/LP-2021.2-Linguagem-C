#include <stdio.h>
 
int main() {
    
    int num, cont, i=0;
    scanf("%d", &num);
    
    if(num%2==0){
        num-=1;      
        while(i<=5){
            cont+=2;
            printf("%d\n", num+cont);
            i++;
        }
    }
    else{
        printf("%d\n", num);
        while(i!=5){
            cont+=2;
            printf("%d\n", num+cont);
            i++;
        }
    }

    
    return 0;
}