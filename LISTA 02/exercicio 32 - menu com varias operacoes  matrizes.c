/* 32. Faça um programa que leia duas matrizes N X N de mesma ordem com valores reais. Ofereça ao usuário um
menu de opções: 
(a) somar as duas matrizes 
(b) subtrair a primeira matriz da segunda
(c) adicionar uma constante as duas matrizes 
(d) imprimir as matrizes
Nas duas primeiras opções uma terceira matriz deve ser criada. Na terceira opção o valor da constante deve ser
lido e o resultado da adição da constante deve ser armazenado na própria matriz */
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include "bibliotecaMatriz.h"
int main(){
	setlocale(LC_ALL,"Portuguese");
	float mat1[100][100], mat2[100][100],result[100][100];
	int i, j, op, n, con;
	printf("Digite a ordem das matrizes: ");
	scanf("%d", &n);
	printf("Digite valores da primeira matriz: ");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("\n [%d][%d]:", i,j);
			scanf("%f",&mat1[i][j]);
		}// fim for j
	}// fim for i
	printf("Digite valores da segunda matriz: ");
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				printf("\n [%d][%d]:", i,j);
				scanf("%f",&mat2[i][j]);
		}// fim for j
	}// fim for i
	printf("Escolha sua operação:\n(1) somar as duas matrizes\n(2) subtrair a primeira matriz da segunda\n(3) adicionar uma constante as duas matrizes \n(4) imprimir as matrizes");
	scanf("%d", &op);
	 switch (op){
        case 1:
        for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				result[i][j] = mat1[i][j] + mat2[i][j];
		}// fim for j
	}// fim for i
        	printf("\n");
			for(i=0;i<n;i++){
				for(j=0;j<n;j++){
					printf("%.2f |", result[i][j]);
		}// fim for j
		printf("\n");
	}// fim for i
             break;
        case 2:
        for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				result[i][j] = mat1[i][j] - mat2[i][j];
		}// fim for j
	}// fim for i
        	printf("\n");
		printf("\n");
			for(i=0;i<n;i++){
				for(j=0;j<n;j++){
					printf("%.2f |", result[i][j]);
		}// fim for j
		printf("\n");
	}// fim for i
             break;
        case 3:
        	printf("Digite o valor da constante: ");
        	scanf("%d", &con);
        	for(i=0;i<n;i++){
				for(j=0;j<n;j++){
					mat1[i][j] = mat1[i][j] + con;
					mat2[i][j] = mat2[i][j] + con;
		}// fim for j
	}// fim for i
	        printf("\n");
			printf("\n");
			for(i=0;i<n;i++){
				for(j=0;j<n;j++){
					printf("%.2f |", mat1[i][j]);
		}// fim for j
		printf("\n");
	}// fim for i
			printf("\n");
			printf("\n");
			for(i=0;i<n;i++){
				for(j=0;j<n;j++){
					printf("%.2f |", mat2[i][j]);
		}// fim for j
		printf("\n");
	}// fim for i
             break;
        case 4:
        	printf("\n");
			printf("\n");
			for(i=0;i<n;i++){
				for(j=0;j<n;j++){
					printf("%.2f |", mat1[i][j]);
		}// fim for j
		printf("\n");
	}// fim for i
        	printf("\n");
			printf("\n");
			for(i=0;i<n;i++){
				for(j=0;j<n;j++){
					printf("%.2f |", mat2[i][j]);
		}// fim for j
		printf("\n");
	}// fim for i
        	
             break;
        default:
        	printf("\nValor não reconhecido.");
    }
	
	return 0;
	
}
