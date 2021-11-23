#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bibliotecaVetor.h"
int main(){
	int n1[100],n2[100];
	leiaVetor(n1,10);
	leiaVetor(n2,10);

	if(strcmp(n1,n2)==0) 
		printf("Sao iguais");
	else
		printf("nao sao iguais");
	
	
	
}
