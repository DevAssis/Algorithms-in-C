/*  Exercícios com estruturas de repetição

5) Utilizando a estrutura de repetição Do-While, com base na fórmula [ area = (base * altura) / 2
], faça um algoritmo para ler a base e a altura de um triângulo, ao término do processamento
imprima a área calculada. Execute este algoritmo 6 vezes
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
		printf("%iª Fórmula de Cálculo do triângulo\n\n", contador);
		puts("Informe a base do triângulo: ");
		fflush(stdin);
		scanf("%f", &base);
		puts("Informe a altura do triângulo: ");
		fflush(stdin);
		scanf("%f", &altura);
		area = (base * altura) / 2;		
		printf("\n\nÁrea do tríagulo calculada é: %0.2f\n\n", area);
		contador++;
	} while (contador <= 6);
	
	return(0);	
}





