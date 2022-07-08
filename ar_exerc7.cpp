/* Exercícios com variáveis homogeneas

7) Solicitando ao usuário 10 valores maior que zero (bloquear com estrutura de repetição), os
quais devem ser armazenados num único vetor, apresente o maior, o menor e as posições em
que os mesmos foram informados.
*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>


int main (void) {
	int valor[10], maior, menor, i, posicao_maior, posicao_menor;
	int condicao, contador = 1; 
	
	setlocale (LC_ALL, "Portuguese");
			
	for (i=0; i<=9; i++){
		condicao = 0;
		
		printf("Entre com o %iº valor maior que zero da posição %i: \n", contador, i);
		scanf("%i", &valor[i]);
		
		while (condicao == 0){
			
			if (valor[i] > 0){
				condicao = 1;
			}
			else {
				printf("\nValor Inválido. Entre com o %iº valor maior que zero:  \n", contador);
				scanf("%i", &valor[i]);
				condicao = 0;
			}
			
		}
		contador++;
	}	
	
	maior = valor[0];
	posicao_maior = 0;
	menor = valor[0];
	posicao_menor = 0;
	
	for (i=1; i<9; i++){
		if (valor[i] > maior) {
			maior = valor[i];
			posicao_maior = i;			
		}
		if (valor[i] < menor) {
			menor = valor [i];
			posicao_menor = i;
		}
	}
	printf("O maior valor é %i da posicao %i\n\n", maior, posicao_maior);
	printf("O menor valor é %i da posicao %i", menor, posicao_menor);	
	return (0);
}
