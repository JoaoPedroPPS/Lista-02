//21. Gere uma matriz de N Linhas x M Colunas. Solicitar um número ao usuário e passe para uma função que
//deve verificar quantas vezes este se encontra na matriz.
#include<stdio.h>
#include<locale.h>
#include "bibliotecaMatriz.h"
int qtdNumMatriz(int m[100][100],int linhas, int colunas, int n){
	int i, j, cont=0;
	for(i=0;i<linhas;i++)
		for(j=0;j<colunas;j++)
			if(m[i][j]==n)
				cont++;
				
	return cont;
}
//fim da função
int main(){
	setlocale(LC_ALL,"Portuguese");
	int m[100][100], linhas, cols, num, r;
	printf("Linhas e colunas da matriz: ");
	scanf("%d%d", &linhas, &cols);
	geraMatriz(m,linhas,cols);
	mostraMatriz(m,linhas,cols);
	printf("Numero a ser verificado se existe na matriz: ");
	scanf("%d", &num);
	//chamar a função que irá verificar o numero na matriz
	r = qtdNumMatriz(m,linhas,cols,num);
	printf("Quantidade do numero %d : %d", num, r);
	return 0;
}
