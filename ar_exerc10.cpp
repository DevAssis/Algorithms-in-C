/* Exerc�cios com modulariza��o

10) Fa�a um algoritmo onde no programa principal ser� feita a chamada a uma FUN��O onde
ser� feita a leitura de 4 notas e o calculo da m�dia, em seguida, imprima as quatro notas e a
media, feito isso, volte ao programa principal, retornando a media encontrada, chame uma
segunda FUN��O levando a m�dia como par�metro e j� dentro da fun��o diga se o aluno est�
ou n�o aprovado. (m�dia para aprova��o 6.0). Ap�s isso, volte ao programa principal, e emita
uma mensagem dizendo se �deseja fazer novo calculo S/N�, se a resposta for �N� encerre o
programa, caso contr�rio, fa�a novo calculo.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

float Media(float n1, float n2, float n3, float n4);
void AprovadoReprovado(float media);

int main(){

   float n1,n2,n3,n4;

   int resp;
   
   setlocale (LC_ALL, "Portuguese");

       do {

       printf("Digite a nota 1:\n");
       scanf("%f",&n1);

       printf("Digite a nota 2:\n");
       scanf("%f",&n2);

       printf("Digite a nota 3:\n");
       scanf("%f",&n3);

       printf("Digite a nota 4:\n");
       scanf("%f",&n4);


       printf("\n Nota1: %.2f\n Nota2: %.2f\n Nota3: %.2f\n Nota4: %.2f\n",n1,n2,n3,n4);

       printf("\nM�dia = %.2f\n",Media(n1,n2,n3,n4));

       AprovadoReprovado(Media(n1,n2,n3,n4));
	   
	  
  	   printf("\nDeseja calcular outras notas?(Sim = 1/N�o = 0)\n");
       scanf("%d",&resp);
	   
		   do {
		    if ((resp != 1) && (resp != 0)) {
		   	  puts("\nResposta Inv�lida. Favor entrar com Sim=1 ou N�o=0:\n");
		   	  scanf("%d",&resp);
		   	
		    }
		   	
		   } while ((resp != 1) && (resp != 0));
 
       } while (resp == 1);

   return 0;

}


float Media(float n1, float n2, float n3, float n4){

   float media;
   media = ((n1+n2+n3+n4)/4);
   return media;

}


void AprovadoReprovado(float media){
   if(media >= 6.0){

       printf("Aprovado\n");

   }else{

       printf("Reprovado\n");

   }
}
