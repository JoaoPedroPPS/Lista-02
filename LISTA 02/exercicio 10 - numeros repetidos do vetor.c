//10. Receber um vetor de N posições do tipo inteiro verificar quantas vezes um dado valor informado pelo
//usuário se encontra no vetor. Apresente também todos elementos do vetor.
#include<stdio.h>
#include<stdlib.h>
#include "bibliotecaVetor.h"
int main(){
	int vetor[200], vetorq[200], n,i;
	for(i=0;i<200;i++)
		vetorq[i] = 0;
	printf("Digite a quantidade de posições do vetor: ");
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		printf("\nV[%d]: ", i);
		scanf("%d", &vetor[i]);
		vetorq[vetor[i]]++;
	}
	printf("\n");
	mostraVetor(vetor,n);
	mostraVetor(vetorq,n);
	for(i=0; i<200; i++){
		if((vetorq[i] > 1) && (vetorq[i] < 200))
			printf("O numero %d se repete %d vezes. \n", i, vetorq[i]);	
		
		
	}
	

	
	
	return 0;
}
