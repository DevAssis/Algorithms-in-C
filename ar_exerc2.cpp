/* Exercicios com estrutura de decisão simples e/ou composta:

2) Faça um algoritmo que tendo como dados de entrada a altura e o sexo de uma pessoa
(digite “M” para masculino e “F” para feminino), calcule o peso ideal dessa pessoa,
utilizando-se das seguintes fórmulas:
- Para sexo Masculino: peso_i = (450.7 * altura) / 10
- Para sexo feminico.: peso_i = (400.7 * altura) / 10

A)pseudocódigo:	

ALGORITIMO	
	DECLARE altura, peso_i REAL
	DECLARE sexo CARACTERE
	ESCREVA ("Digite a altura: ")
    LEIA altura
    ESCREVA ("Digite “M” para masculino e “F” para feminino: ")
    LEIA sexo
    SE (sexo = "M") ou (sexo = "m") ENTAO
    	peso_i <- (450.7 * altura) / 10
    SENÃO
    	peso_i <- (400.7 * altura) / 10
	ESCREVA ("O peso ideal calculado: ", peso_i)	    
FIM DO ALGORITIMO

B)fluxograma:
Fluxograma em anexo => ar_exerc2_fluxograma.pdf

C)Linguagem C:
*/
#include <stdio.h>
#include <conio.h>

int main(void){
  float altura, peso_i;
  char sexo;
  puts("Digite a altura: ");
  scanf("%f",&altura);
  puts("Digite \"M\" para masculino e \"F\" para feminino: ");
  fflush(stdin);
  scanf("%c",&sexo);
  if ((sexo == 'M') || (sexo == 'm'))
	peso_i=(450.7 * altura) / 10;
  else
	peso_i=(400.7 * altura) / 10;
  printf("O peso ideal calculado: %f", peso_i);
  getch();
  return(0);		
}
