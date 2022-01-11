#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(){
  	int matriz[9][9], verificador[10], i, j, k, l, num, vt = 0;
   
  	scanf("%d",&num);
  
  	for(l = 1; l <= num; l++){
    	vt = 0;
    	for(i = 0; i < 9; i++){
      		for(j = 0; j < 9; j++)
    			scanf("%d",&matriz[i][j]);
    	}
	    for(i = 0 ; i < 9 && !vt; i++){
	      	memset(verificador, 0, sizeof(verificador));
	      	for(j = 0; j < 9 && !vt; j++){
	    		if(verificador[matriz[i][j]])
	      			vt = 1;
	    		else
	      			verificador[matriz[i][j]] = 1;
	      	}
	    }
	    for(i = 0; i < 9 && !vt; i++){
	      	memset(verificador, 0, sizeof(verificador));
	      	for(j = 0; j < 9 && !vt; j++){
	    		if(verificador[matriz[j][i]])
	      			vt = 1;
	    		else
	      			verificador[matriz[j][i]] = 1;
	      	}
	    }
	    for(i = 2; i < 9 && !vt; i+=3){
	      	memset(verificador, 0, sizeof(verificador));
	      	for(j = i - 2; j <= i && !vt; j++){
	    		for(k = i - 2; k <= i && !vt; k++){
	      			if(verificador[matriz[j][k]])
	        			vt = 1;
	      			else
	        			verificador[matriz[j][k]] = 1;
	    		}
	      	}
	    }

	    printf("Instancia %d\n",l);
	    printf("%s\n\n",(!vt)?"SIM":"NAO");
  	}
  	
  	return 0 ; 
}