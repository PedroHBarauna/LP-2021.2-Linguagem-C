#include <stdio.h>

int main(){
    double salario, imposto;
    scanf("%lf", &salario);
    if (salario<=2000.00){
        printf("Isento\n");
    }
    else{
        if (salario>=2000.01){
            if(salario-2000.00>1000.00){
                imposto+=80.00;
            }
            else{
                imposto+=(salario-2000.00)*0.08;
            }
        }
        if (salario>=3000.01){
            if(salario-3000.00>1500.00){
                imposto+=270.00;
            }
            else{
                imposto+=(salario-3000.00)*0.18;
            }
        }
        if (salario>=4500.01){
            imposto+=(salario-4500.00)*0.28;
        }
        printf("R$ %.2lf\n", imposto);
    }
    return 0;
}