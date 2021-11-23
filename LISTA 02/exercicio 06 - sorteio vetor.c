//6. Escreve um programa que sorteio, aleatoriamente, N números e armazene estes em um vetor. Em seguida, o
//usuário digita um número e seu programa em C deve acusar se o número digitado está no vetor ou não. Se
//estiver, diga a posição que está.
#include <stdio.h> 
#include <stdlib.h> 
#include "bibliotecaVetor.h"
int main () { 
int num[200],i, n, user,pos,posi; 
printf("Digite o tamanho do vetor: ");
scanf("%d", &n);
geraVetor(num,n);
printf("Digite o seu numero: ");
scanf("%d", &user);

for (i=0; i<=n; i++){ 
	if(num[i]==user){
		posi = i;
			printf("O numero digitado esta no vetor na posicao %d\n", posi);
	}
	else{
		printf("O numero digitado nao esta no vetor\n");
	}
}
	mostraVetor(num,n);
	
	
	return 0;
}
