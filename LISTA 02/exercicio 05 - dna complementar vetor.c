//5. Leia um vetor DNA de caracteres para receber as letras A, T, C e G que representam as bases do DNA. Este
//vetor será responsável por representar uma fita de um gene de limite de 50 bases. Gere o vetor
//complementar ao vetor DNA e o apresente (Lembrando as bases complementares A=T C=G).

#include <stdio.h>
#include <string.h>

int main (){
   	char dna[100], complementar[100];
   	int i,tam;
    printf("Digite a sequencia de DNA:");
    gets(dna);
    tam= strlen(dna);

   for(i-0; i<tam; i++){
    switch (dna[i]){
        case 'A': complementar[i]='T';
             break;
        case 'T': complementar[i]='A';
             break;
        case 'C': complementar[i]='G';
             break;
        case 'G': complementar[i]='C';
             break;
    }
}
  printf ("Fita Principal: \n");
  for (i=0; i<tam; i++)
     	printf("%c |", dna[i]);
   printf("\nFita complementar: \n");
   for(i=0; i<tam; i++)
   	 	printf("%c |", complementar[i]);
   	 	
   	 	
	return 0;
}
