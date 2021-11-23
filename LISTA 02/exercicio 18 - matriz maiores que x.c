//18. Receba uma matriz N por M e conte quantos números maiores que X existem na matriz. X deve ser
//informado pelo usuário.
#include<stdio.h>
#include<stdlib.h>
#include "bibliotecaMatriz.h"
int main(){
	int mat[100][100], linhas, cols, x, maior=0,i,j;
	printf("Dimensao da matriz: ");
	scanf("%d%d", &linhas, &cols);
	leiaMatriz(mat,linhas,cols);
	mostraMatriz(mat,linhas,cols);
	printf("Digite o valor de X: ");
	scanf("%d", &x);
	
	for(i=0;i<linhas;i++)
		for(j=0;j<cols;j++)
			if(mat[i][j] > x)
				maior++;
	
	
	printf("Na matriz existem %d numeros maiores que %d", maior, x);
	return 0;
}
