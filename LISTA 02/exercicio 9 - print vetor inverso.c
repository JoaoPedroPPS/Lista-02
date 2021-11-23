//9. Leia um vetor de caracteres (limite 100) utilizando a função gets(). Utilize a função strlen (Você deve incluir a
//biblioteca string.h) para obter a quantidade de elementos do vetor de caracteres. Escreva o vetor lido em
//ordem inversa.
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL,"Portuguese");

	char vetorc[100], tam, i;
	printf ("Entre com uma palavra: ");
	gets (vetorc);
    tam = strlen(vetorc);
	for(i= tam;i>=0;i--){
		printf("%c", vetorc[i]);
	}
	return 0;
}

