#include <stdio.h>
#include <math.h>
 
int main() {
 
    int num, pot=0;
    scanf("%d", &num);
    
    if (num%2==0){
        for(int i=2;i<=num;i+=2){
            pot=pow(i,2);
            printf("%d^2 = %d\n", i, pot);
        }
    }
    else{
        num-=1;
        for(int i=2;i<=num;i+=2){
            pot=pow(i,2);
            printf("%d^2 = %d\n", i, pot);
        }
    }
    return 0;
}