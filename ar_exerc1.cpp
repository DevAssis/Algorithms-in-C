/* Exercicios com estrutura sequencial:

1) Encontrar e apresentar o valor para Z aplicando a seguinte fórmula: Z = ( L+ A * 2.3) / C

A)pseudocódigo:	

ALGORITIMO	
	DECLARE L, A, C INTEIRO
	DECLARE Z REAL
	ESCREVA ("Entre com o valor de L: ")
    LEIA l
    ESCREVA ("Entre com o valor de A: ")
    LEIA A
    ESCREVA ("Entre com o valor de C: ")
    LEIA C
	F <- ( L+ A * 2.3) / C
	ESCREVA ("O valor de Z é:", Z)
FIM DO ALGORITIMO

B)fluxograma:
Fluxograma em anexo => ar_exerc1_fluxograma.pdf

C)Linguagem C:
*/
#include <stdio.h>
#include <conio.h>

int main(void){
  int L, A, C;
  float Z;
  
  printf("Entre com o valor de L: ");
  scanf("%i", &L);
  printf("Entre com o valor de A: ");
  scanf("%i", &A);
  printf("Entre com o valor de C: ");
  scanf("%i", &C);
  
  Z = (L+A*2.3)/C;
  
  printf("O valor de Z = %0.2f", Z);
  getch();
  
  return(0);
}


