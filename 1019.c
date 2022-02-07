#include <stdio.h>
 
int main() {
 
    int tempo, horas, min, seg;
    
    scanf("%d", &tempo);
    
    horas=tempo/3600;
    
    min=tempo/60-horas*60;
    
    
    seg=tempo-horas*3600-min*60;
    
    printf("%d:%d:%d\n", horas, min, seg);
    
    return 0;
}