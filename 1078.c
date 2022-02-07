#include <stdio.h>
 
int main() {

    int num, mult;
    scanf("%d", &num);
    
    for(int i=1; i<=10;i++){
        mult=num*i;
        printf("%d x %d = %d\n", i, num, mult);
    }
 
    return 0;
}