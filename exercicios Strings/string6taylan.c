/**********************************************************************************************************
6 – Escreva um programa que:
 - leia duas strings;
 - compare as duas: informe se as duas são iguais ou diferentes entre si;
 - indique a capacidade de cada variável string
 - informe o espaço usado pelo conteúdo em cada string.
 - Concatenar as duas strings. Antes de concatenar verifique se a string de destino tem espaço suficiente
 para a concatenação, caso o espaço não seja suficiente, escreva uma mensagem de erro.
**********************************************************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
	char string1 [100], string2 [100];

	printf("\nInsira uma frase: ");
	scanf(" %[^\n]s", string1);
	int cap1 = sizeof(string1);
	int tam1 = strlen(string1);
	printf("\nTamanho da string:%d bytes", tam1);
	printf("\nCapacidade da string:%d bytes\n", cap1);

	printf("\nInsira outra frase: ");
	scanf(" %[^\n]s", string2);
	int cap2 = sizeof(string2);
	int tam2 = strlen(string2);
	printf("\nTamanho da string: %d bytes", tam2);
	printf("\nCapacidade da string: %d bytes", cap2);
	
	
	if(sizeof(string1) > strlen(string1) + strlen(string2)){ //validação de tamanho da string 1
	    printf("\nConcatenação permitida: ");
	    strcat(string1, " "); // add espaço
	    strcat(string1, string2); // concatenação
	    printf("\n%s", string1);
	} else {
	    printf("\nConcatenação não permitida por falta de memória.");
	}
}
