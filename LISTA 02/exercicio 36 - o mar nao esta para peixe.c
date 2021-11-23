//36. O mar não está para peixe
#include<stdio.h>
#include<locale.h>
#include "bibliotecaMatriz.h"
int main(){
	setlocale(LC_ALL,"Portuguese");
	int m[100][100], i, j, redes=0, n, xi, xf, yi, yf;
	for(i=0;i<100;i++)
		for(j=0;j<100;j++)
			m[i][j] = 0;
	printf("Quantidade de registros de redes: ");
	scanf("%d", &n);
	
	for(i=0;i<=n;i++){
	printf("\nDigite a posição inicial das colunas da rede: ");
	scanf("%d", &xi);
	printf("\nDigite a posição final das colunas da rede: ");
	scanf("%d", &xf);		
	printf("\nDigite a posição inicial das linhas da rede: ");
	scanf("%d", &yi);
	printf("\nDigite a posição final das linhas da rede: ");
	scanf("%d", &yf);		
	for(i=xi;i<=xf;i++)
		for(j=yi;j<=yf;j++)
			m[i][j] = 1;
	
	xi = 0;
	xf = 0;
	yi = 0;
	yf = 0;
	}
	
	for(i=0;i<100;i++)
		for(j=0;j<100;j++)
			if(m[i][j] == 1)
				redes++;
	printf("\n%d", redes);
	return 0;
}
