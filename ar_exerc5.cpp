/*  Exerc�cios com estruturas de repeti��o

5) Utilizando a estrutura de repeti��o Do-While, com base na f�rmula [ area = (base * altura) / 2
], fa�a um algoritmo para ler a base e a altura de um tri�ngulo, ao t�rmino do processamento
imprima a �rea calculada. Execute este algoritmo 6 vezes
*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main (void){
	float area, base, altura;
	int contador;
	
	contador = 1;
	
	setlocale(LC_ALL, "Portuguese");
	
	do {
		printf("%i� F�rmula de C�lculo do tri�ngulo\n\n", contador);
		puts("Informe a base do tri�ngulo: ");
		fflush(stdin);
		scanf("%f", &base);
		puts("Informe a altura do tri�ngulo: ");
		fflush(stdin);
		scanf("%f", &altura);
		area = (base * altura) / 2;		
		printf("\n\n�rea do tr�agulo calculada �: %0.2f\n\n", area);
		contador++;
	} while (contador <= 6);
	
	return(0);	
}





