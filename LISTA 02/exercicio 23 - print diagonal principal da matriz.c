//23. Escrever um programa C que gere uma matriz de N Linhas x M Colunas e apresente sua diagonal principal.
//Dica, limite sua matriz a uma ordem 100.
#include<stdio.h>
#include<locale.h>
#include "bibliotecaMatriz.h"
int main(){
	int m[100][100], linhas, cols, i, j;
	printf("Linhas e colunas da matriz: ");
	scanf("%d%d", &linhas, &cols);
	geraMatriz(m,linhas,cols);
	mostraMatriz(m,linhas,cols);
	printf("A diagonal principal da matriz e: \n");
	for(i=0;i<linhas;i++)
		for(j=0;j<cols;j++)
			if(i==j)
				printf("%d |", m[i][j]);
	
	return 0;
	
}
