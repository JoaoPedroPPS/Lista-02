#include<stdio.h>
#include<stdlib.h>
    /*  void geraVetor(int[], int);    // prot�tipo da fun��o, usada apenas quando estiver abaixo do MAIN
		void mostraVetor(int[], int);  // prot�tipo da fun��o, usada apenas quando estiver abaixo do MAIN        
		  */
		  
//---------------- Fun��es da Biblioteca -------------------
 
void geraVetor(int v[], int n){
	int i;
	srand(time(NULL)); //INICIALIZA RNG
	for(i=0; i<n; i++){
		v[i] = rand()%10;
	}
}

//----------------------------------------------------

void mostraVetor(int v[], int n){
	int i;
	for(i=0; i<n; i++){
		printf(" %d |", v[i] );
	}
	printf("\n");
}

//-----------------------------------------------------

void leiaVetor(int v[], int n){
	int i;
	for(i=0; i<n; i++){
		printf("\nV[%d]: ", i);
		scanf("%d", &v[i]);
	}
	printf("\n");
}

