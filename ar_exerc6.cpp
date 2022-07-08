/* Exercícios com estruturas de repetição
 
6) Utilizando a estrutura de repetição For, calcule a conversão de graus Fahrenheit para
Celsius através da fórmula [ C = (5/9)*(F-32) ]. Onde a variável F da fórmula significa
“fahrenheit” e a variável C significa “Celsius”. Escreva um algoritmo que calcule uma tabela de
graus Celsius em função de graus Fahrenheit que variem de 40 até 60.

*/
# include <stdio.h>
# include <conio.h>
# include <locale>

int main (void) {
	float C, F;
	setlocale(LC_ALL, "Portuguese");
	printf("Tabela de conversão de graus:\n");
	for (F=40; F<=60; F++) {
		C = ((5.0/9.0)) * (F-32);
		printf("\nConversão de %0.1fº graus Fahrenheit para graus Celsius: %0.1fº", F, C);
	}
	
	return(0);
}

