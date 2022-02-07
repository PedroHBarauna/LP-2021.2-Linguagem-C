#include <stdio.h>
 
int main() {
 
    int num, x, contin=0, contout=0;
    scanf("%d", &num);
    
    for(int i=0;i<num;i++){
        scanf("%d", &x);
        if (x>=10 && x<=20){
            contin++;
        }
        else{
            contout++;
        }
    }
    
    printf("%d in\n", contin);
    printf("%d out\n", contout);
 
    return 0;
}