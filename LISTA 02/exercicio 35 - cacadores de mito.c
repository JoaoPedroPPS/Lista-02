//35. Caçadores de Mito

#include<stdio.h>
#include<locale.h>
#include "bibliotecaMatriz.h"
int main(){
	setlocale(LC_ALL,"Portuguese");
	int m[100][100], i, j, raio=0, n, x, y;
	for(i=0;i<100;i++)
		for(j=0;j<100;j++)
			m[i][j] = 0;
	printf("Quantidade de registros de raio: ");
	scanf("%d", &n);
	for(i=0;i<n;i++){
		printf("coordenada que o %d° raio caiu: ", i+1);
		scanf("%d%d", &x, &y);
		m[x][y]++;
	}//fim for	
	mostraMatriz(m,10,10);
	for(i=0;i<n;i++)
		for(j=0;j<100;j++){
			if (m[i][j]>1){
				raio=1;
		
			}		
		}
		if (raio=1){
				printf("1\nRaios cairam no mesmo lugar.\n");
		
			}
		return 0;
		}
	
