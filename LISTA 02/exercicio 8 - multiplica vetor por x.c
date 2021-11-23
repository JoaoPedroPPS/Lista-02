//8. Ler N elementos de um vetor A e um valor X. Criar o vetor B contendo os elementos do vetor A
//multiplicados por X.

#include <stdio.h>
#include<stdlib.h>
#include "bibliotecaVetor.h"
int main() {
    int vetorA[200], vetorB[200], x, n, i;
    printf("Digite a quantidade de elementos do vetor: ");
    scanf("%d", &n);
    
    leiaVetor(vetorA, n);
    mostraVetor(vetorA,n);
    printf("\nDigite o valor a ser multiplicado pelo vetor: ");
    scanf("%d", &x);
    for(i=0;i<n;i++){
    	vetorB[i] = vetorA[i] * x;
	}
    printf("\n");
    mostraVetor(vetorB, n);
    
    return 0;
    
    
}


