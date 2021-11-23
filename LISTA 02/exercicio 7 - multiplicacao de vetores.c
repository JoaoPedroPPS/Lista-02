//7. Escreva um programa que leia ou gere dois vetores de N posições e faça a multiplicação dos elementos de
//mesmo índice, colocando o resultado em um terceiro vetor. Mostre o vetor resultante.

#include <stdio.h>
#include<stdlib.h>
#include "bibliotecaVetor.h"
int main() {
    int vetor1[200], vetor2[200], vetorResultado[200], n, op=0, i;
    printf("Digite a quantidade de posições dos dois vetores: ");
    scanf("%d", &n);
    printf("Digite o valor de operação [1]gerar [2]ler: ");
    scanf("%d", &op);
    if(op==1){
    	geraVetor(vetor1,n);
    	geraVetor(vetor2,n);
	}
	else{
		leiaVetor(vetor1,n);
		leiaVetor(vetor2,n);
	}
    for (i = 0; i<n; i++) {
        vetorResultado[i] =vetor1[i] * vetor2[i];
    }
    mostraVetor(vetor1,n);
    printf("\n");
    mostraVetor(vetor2,n);
    printf("\n");
    mostraVetor(vetorResultado,n);
    return 0;
}

