#include <stdio.h>
 
int main() {
 
    int x, y, soma;
    fflush(stdin);
    scanf("%d", &x);
    scanf("%d", &y);
    
    soma=x+y;
    
    printf("SOMA = %d\n", soma);
    
    return 0;
}