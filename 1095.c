#include <stdio.h>

int main(){
    
    int seq1=60;
    
    for (int i=1;i<=37;i+=3){
        printf("I=%d ", i);
        printf("J=%d\n", seq1);
        seq1-=5;
    }

}