//4. Escreva um programa que leia ou gere um vetor de N elementos inteiros. A seguir, conte quantos valores
//pares existem no vetor. Apresente a média dos valores pares. 12 
#include<stdio.h>
#include<stdlib.h>
#include "bibliotecaVetor.h"
int main(){
	int vetor[100], n, i, pares=0, somapares=0, op;
	float medpares=0;	
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
		if(vetor[i] % 2 == 0){
			pares++;
			somapares += vetor[i];
		}
		
	}
	medpares = somapares / pares;
	
	printf("\nA media dos valores pares e de: %.2f", medpares);
	return 0;	
	
	
}
