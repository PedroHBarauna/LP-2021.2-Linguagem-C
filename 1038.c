#include <stdio.h>
 
int main() {
 
    int codigo, prod;
    float total;
    scanf("%d", &codigo);
    scanf("%d", &prod);
    switch(codigo){
        case 1:
            total=prod*4.00;
        break;
        case 2:
            total=prod*4.50;
        break;
        case 3:
            total=prod*5.00;
        break;
        case 4:
            total=prod*2.00;
        break;
        case 5:
            total=prod*1.50;
        break;
        
        default:
            return 0;
    }
    
    printf("Total: R$ %.2f\n", total);
 
    return 0;
}