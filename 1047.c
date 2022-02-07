#include <stdio.h>

int main() {
    int hi, mi, si, hf, mf, sf, total, totalhr, totalmin;
            
    scanf("%d %d %d %d", &hi, &mi, &hf, &mf);
            
    if (hf <= hi && mf <= mi) {
        hf = hf + 24;
    } 
    else{
        if (mf <= mi) {
            mf = mf + 60;
            hf = hf - 1;
        }
    }
            
    si = (hi * 3600) + (mi * 60);
    sf = (hf * 3600) + (mf * 60);
            
    total = (sf - si);
    totalhr = total / 3600;
    totalmin = (total - (totalhr * 3600)) / 60;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", totalhr, totalmin);
              
    return 0;
}