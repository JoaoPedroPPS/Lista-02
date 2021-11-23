//19. Receba e apresente uma matriz de N Linhas x M Colunas valores inteiros. Após isso indique qual é o maior e
//valor da matriz.
#include<stdio.h>
#include<stdlib.h>
#include "bibliotecaMatriz.h"
int main(){
	int mat[100][100], linhas, cols, i,j, maior=0;
	printf("Dimensao da matriz: ");
	scanf("%d%d", &linhas, &cols);
	leiaMatriz(mat,linhas,cols);
	mostraMatriz(mat,linhas,cols);
	maior = mat[0][0];
	
	for(i=0;i<linhas;i++)
		for(j=0;j<cols;j++)
			if(mat[i][j] > maior)
				maior = mat [i][j];	
	
	printf("o maior numero da matriz e: %d", maior);
	
}
