#include <stdio.h>
int main(){

    int v [30];
    int soma=0;
    int *p;
    int i;
    
        for(i=0;i<30;i++){
    	scanf("%d", &v[i]); 
		}
		
	    for(i=0;i<30;i++){
    	soma = v[i]+soma;
		}
	p = soma/30;
	printf("Media: %d\n", p);
}
