#include <stdio.h>

int main(){
    
    int num;
    double a, b , c, media;
    
    scanf("%d", &num);
    for (int i=0; i<num;i++){
        scanf("%lf", &a);
        scanf("%lf", &b);
        scanf("%lf", &c);
        
        media=((a*2)+(b*3)+(c*5))/10;
        printf("%.1lf\n", media);
    }

    return 0;
}