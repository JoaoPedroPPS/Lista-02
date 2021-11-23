//3. Escreva um programa que leia ou gere um vetor de N elementos inteiros. A seguir, conte quantos valores
//impares existem no vetor. Apresente o vetor e a quantidade de impares no final
#include<stdio.h>
#include<stdlib.h>
#include "bibliotecaVetor.h"
int main(){
	int vetor[100], n, i, op, impar=0;	
	printf("Quantos elementos no vetor?");
	scanf("%d", &n);
	printf("[1] Gerar\n[2] Ler\n");
	scanf("%d", &op);
	if(op==1)
		geraVetor(vetor, n);
	else
		leiaVetor(vetor, n);
	mostraVetor(vetor, n);
	
	for(i=0;i<n;i++){
		if(vetor[i] % 2 == 1)
			impar++;
	}
	printf("\n O numero de numeros impares e: %d ", impar);
}
