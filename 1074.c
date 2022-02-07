#include <stdio.h>
 
int main() {
 
    int num, x;
    scanf("%d", &num);
    
    for(int i=0; i<num;i++){
    
        scanf("%d", &x);
        if(x==0){
            printf("NULL\n");
        }
        else{
            if(x>0){
                if(x%2==0){
                    printf("EVEN POSITIVE\n"); 
                }
                else{
                    printf("ODD POSITIVE\n");
                }
            }
            else{
                if(x%2==0){
                    printf("EVEN NEGATIVE\n"); 
                }
                else{
                    printf("ODD NEGATIVE\n");
                }
            }
        }
    
    }
    return 0;
}