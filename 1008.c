#include <stdio.h>
 
int main() {
 
    int a, b; 
    float c, salario;
    
    fflush(stdin);
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%f", &c);
    
    salario=b*c;
    
    printf("NUMBER = %d\n", a);
    printf("SALARY = U$ %.2f\n", salario);
    return 0;
}