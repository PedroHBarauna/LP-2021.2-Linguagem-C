#include <stdio.h>
 
int main() {
 
    int idade, ano, meses, dias, idade2;
    
    scanf("%d", &idade);
    
    idade2=idade;
    
    ano=idade2/365;
    idade2=idade2 -(ano*365);
    
    meses= idade2/30;
    idade2=idade2 -(meses*30);
    
    dias=idade2;
    
    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);
    
    return 0;
}