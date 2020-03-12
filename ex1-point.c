#include <stdio.h>
int main(){
	 
    int v [10];
    int i,j,k=0;
    int *p, cont=1;
    for(i=0;i<10;i++){
    	scanf("%d", &v[i]); 
    }
	
	for(i=1;i<10;i++){
		for(j=1;j<10;j++){
	     if(v[i]>k){
	     cont = i;
		 k = v[i];
	     p = v[i];}
	    }
    }
    printf("o maior: %d", p);
}
    



