//2. Dado um vetor A de n números reais, faça um programa para obter o maior e o menor elemento do vetor,
//apresente o vetor, maior e menor valor.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	float numeros[100], maior=0, menor=0;
	int n, op, i=0;
	printf("Quantos elementos no vetor?");
	scanf("%d", &n);
	
	printf("[1] Gerar\n[2] Ler\n");
	scanf("%d", &op);
	
	if(op==1){
		srand(time(NULL)); //INICIALIZA RNG
	for(i=0; i<n; i++)
		numeros[i] = rand()%10;
	}	
	else{
		for(i=0; i<n; i++){
			printf("\nV[%d]: ", i);
			scanf("%f", &numeros[i]);
			}
	}
		
	for(i=0; i<n; i++){
		printf(" %.2f |", numeros[i] );
	}
	printf("\n");
	
	maior = numeros[0];
	menor = numeros[0];
	
	for (i=0; i<n; i++){
		if(numeros[i] > maior)
			maior = numeros[i];
		if(numeros[i] < menor)
			menor = numeros[i];
	}
	printf("\nmaior : %.2f", maior);
	printf("\nmenor : %.2f", menor);
	return 0;
}
