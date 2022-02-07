#include <stdio.h>

int main()
{
    int num, maior, posic;
    maior=0;
    for(int i=1;i<=100;i++){
        scanf("%d", &num);
        if(num>maior){
            maior=num;
            posic=i;
        }
    }
    printf("%d\n", maior);
    printf("%d\n", posic);
    
}