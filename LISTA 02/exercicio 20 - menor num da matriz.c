//20. Receba e apresente uma matriz de N Linhas x M Colunas valores inteiros. Após isso indique qual é o menor e
//valor da matriz.
#include<stdio.h>
#include<stdlib.h>
#include "bibliotecaMatriz.h"
int main(){
	int mat[100][100], linhas, cols, i,j, menor=0;
	printf("Dimensao da matriz: ");
	scanf("%d%d", &linhas, &cols);
	leiaMatriz(mat,linhas,cols);
	mostraMatriz(mat,linhas,cols);
	menor = mat[0][0];
	
	for(i=0;i<linhas;i++)
		for(j=0;j<cols;j++)
			if(mat[i][j] < menor)
				menor = mat [i][j];	
	
	printf("o menor numero da matriz e: %d", menor);
	
}
