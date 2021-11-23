/* 33. Elabore um programa que multiplique duas Matrizes M (2x3) e N (3x2) fornecidas pelo usuário. O programa
deve:
- Ler as matrizes M e N.
- Calcular a multiplicação e armazenar na matriz Mult.
- Apresentar o resultado.
Observe que a multiplicação somente pode ser efetuada se o número de colunas da 1a matriz é igual ao número
de linhas da 2a. Outra característica importante que deve ser analisada é que a matriz produto possui o mesmo
número de linhas da 1a e o mesmo número de colunas da 2a. */
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
