//22. Utilizando a função criada acima, dada uma matriz real NxM, verificar se existem elementos repetidos na
//mesma. Mostrar os valores repetidos.
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
	int matriz[100][100];
	int n,m,i,j, v[100];
	printf("Linhas e colunas da matriz: ");
	scanf("%d%d", &n, &m);
	geraMatriz(matriz,n,m);
	mostraMatriz(matriz,n,m);
	
	for(i=0;i<100;i++)
	  v[i]=0;
	  
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
		  if(qtdNumMatriz(matriz,n,m,matriz[i][j])>1)
		  	if(v[matriz[i][j]]==0){
		       printf("Valor %d repetido\n",matriz[i][j]);
			   v[matriz[i][j]]=1;
			   }// fim if mostra
			   
	return 0;
	}
