#include <stdio.h>

int main(){
    int diai, horai, minutoi, segundoi, diaf, horaf, minutof, segundof, totaldia, totalhora, totalminutos, totalsegundos;
    scanf ("Dia %d\n", &diai);
    scanf ("%d : %d : %d\n", &horai, &minutoi, &segundoi);
    scanf ("Dia %d\n", &diaf);
    scanf ("%d : %d : %d\n", &horaf, &minutof, &segundof);
    totalsegundos+=segundof-segundoi;
    totalminutos+=minutof-minutoi;
    totalhora+=horaf-horai;
    totaldia+=diaf-diai;
    if(totalsegundos<0){
        totalsegundos+=60;
        totalminutos--;
    }
    
    if(totalminutos<0){
        totalminutos+=60;
        totalhora--;
    }
    if(totalhora<0){
        totalhora+=24;
        totaldia--;
    }
    
    printf("%d dia(s)\n", totaldia);
    printf("%d hora(s)\n", totalhora);
    printf("%d minuto(s)\n", totalminutos);
    printf("%d segundo(s)\n", totalsegundos);
    return 0;
}