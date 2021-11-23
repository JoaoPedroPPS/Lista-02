/* 33. Elabore um programa que multiplique duas Matrizes M (2x3) e N (3x2) fornecidas pelo usu�rio. O programa
deve:
- Ler as matrizes M e N.
- Calcular a multiplica��o e armazenar na matriz Mult.
- Apresentar o resultado.
Observe que a multiplica��o somente pode ser efetuada se o n�mero de colunas da 1a matriz � igual ao n�mero
de linhas da 2a. Outra caracter�stica importante que deve ser analisada � que a matriz produto possui o mesmo
n�mero de linhas da 1a e o mesmo n�mero de colunas da 2a. */
#include<stdio.h>
#include<stdlib.h>
#include "bibliotecaMatriz.h"
int main(){
	int matrizM[100][100], matrizN[100][100],mult[100][100],i,j,k,linhasM, colsM, linhasN, colsN;
		
	printf("Digite a quantidade de linhas e colunas da primeira matriz: ");
	scanf("%d%d", &linhasM, &colsM);
	printf("Digite a quantidade de linhas e colunas da segunda matriz: ");
	scanf("%d%d", &linhasN, &colsN);
	
	if (colsM==linhasN){
	printf("Insira os dados da matriz M:  \n");
	leiaMatriz(matrizM,linhasM,colsM);
	printf("Insira os dados da matriz N:  \n");
	leiaMatriz(matrizN,linhasN,colsN);
	
	
	for(i=0;i<2;i++)
		for(j=0;j<2;j++){
				for(k=0;k<colsM;k++)
					mult[i][j] = mult[i][j] + (matrizM[i][k] * matrizN[k][j]);
				    
		
	}//FIM FOR
	
	mostraMatriz(mult,linhasM,colsN);
		
	}//FIM IF
	else{
		printf("\nO codigo nao podera ser efetuado :c");
	}
	
	
	return 0;
	
}
