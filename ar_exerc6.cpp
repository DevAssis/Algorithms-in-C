/* Exerc�cios com estruturas de repeti��o
 
6) Utilizando a estrutura de repeti��o For, calcule a convers�o de graus Fahrenheit para
Celsius atrav�s da f�rmula [ C = (5/9)*(F-32) ]. Onde a vari�vel F da f�rmula significa
�fahrenheit� e a vari�vel C significa �Celsius�. Escreva um algoritmo que calcule uma tabela de
graus Celsius em fun��o de graus Fahrenheit que variem de 40 at� 60.

*/
# include <stdio.h>
# include <conio.h>
# include <locale>

int main (void) {
	float C, F;
	setlocale(LC_ALL, "Portuguese");
	printf("Tabela de convers�o de graus:\n");
	for (F=40; F<=60; F++) {
		C = ((5.0/9.0)) * (F-32);
		printf("\nConvers�o de %0.1f� graus Fahrenheit para graus Celsius: %0.1f�", F, C);
	}
	
	return(0);
}

