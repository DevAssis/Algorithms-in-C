/* Exerc�cios com estruturas de repeti��o

4) Utilizando a estrutura de repeti��o While, Leia 20 valores reais e escreva a somat�ria.
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
	printf("\n\nA somat�ria dos 20 valores reais s�o: %0.2f", soma );
	return(0);
}

