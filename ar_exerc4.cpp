/* Exercícios com estruturas de repetição

4) Utilizando a estrutura de repetição While, Leia 20 valores reais e escreva a somatória.
*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>


int main (void){
	float valor, soma;
	int contador;
	contador = 1;
	
	setlocale(LC_ALL, "Portuguese");
	
	while (contador <= 20){
		printf("Informe o %i valor real: ", contador);
		fflush(stdin);
		scanf("%f", &valor);
		
		soma = soma + valor;
		contador++;
	}
	printf("\n\nA somatória dos 20 valores reais são: %0.2f", soma );
	return(0);
}

