#include <stdio.h>
 
int main() {
 
    double preco1, preco2, total;
    int num1, num2, qtn1, qtn2;
    
    fflush(stdin);
    scanf("%d", &num1);
    scanf("%d", &qtn1);
    scanf("%lf", &preco1);
    
    scanf("%d", &num2);
    scanf("%d", &qtn2);
    scanf("%lf", &preco2);
    
    total=(qtn1*preco1)+(qtn2*preco2);
    
    printf("VALOR A PAGAR: R$ %.2lf\n", total);
    return 0;
}