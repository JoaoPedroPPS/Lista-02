//27. Calcular a soma de 2 matrizes de mesma ordem.
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include "bibliotecaMatriz.h"
int main(){
	setlocale(LC_ALL,"Portuguese");
	int matriz1[100][100], matriz2[100][100], soma[100][100],op, n,i,j;
	printf("Digite a ordem das matrizes: ");
	scanf("%d", &n);
	printf("Escolha sua operação: \n[1]gerar matrizes\n[2]ler matrizes\n");
	scanf("%d", &op);
	if(op==1){
		geraMatriz(matriz1,n,n);
		geraMatriz(matriz2,n,n);
	}
	else{
		leiaMatriz(matriz1,n,n);
		leiaMatriz(matriz2,n,n);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			soma[i][j] = matriz1[i][j] + matriz2[i][j];
		}// fim for j
	}// fim for i
	mostraMatriz(matriz1,n,n);
	mostraMatriz(matriz2,n,n);
	mostraMatriz(soma,n,n);
	return 0;
	
	
	
}
