//31. Efetuar a multiplicação de uma matriz de N Linhas x M Colunas por um escalar.
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include "bibliotecaMatriz.h"
int main(){
	setlocale(LC_ALL,"Portuguese");
	int mat[100][100],l,c,esc,i,j,op, result[100][100];
	printf("Digite a quantidade de linhas: ");
	scanf("%d", &l);
	printf("Digite a quantidade de colunas: ");
	scanf("%d", &c);
	
	printf("Escolha sua operação: \n[1]gerar matriz\n[2]ler matriz\n");
	scanf("%d", &op);
	if(op==1)
		geraMatriz(mat,l,c);
	else
		leiaMatriz(mat,l,c);
	
	printf("Digite o escalar: ");
	scanf("%d", &esc);
	
	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
			result[i][j] = mat[i][j] * esc;
		}// fim for j
	}// fim for i
	
	mostraMatriz(result,l,c);
	
	return 0;
	
	
	}
