/* Exercícios com modularização

10) Faça um algoritmo onde no programa principal será feita a chamada a uma FUNÇÃO onde
será feita a leitura de 4 notas e o calculo da média, em seguida, imprima as quatro notas e a
media, feito isso, volte ao programa principal, retornando a media encontrada, chame uma
segunda FUNÇÃO levando a média como parâmetro e já dentro da função diga se o aluno está
ou não aprovado. (média para aprovação 6.0). Após isso, volte ao programa principal, e emita
uma mensagem dizendo se “deseja fazer novo calculo S/N”, se a resposta for “N” encerre o
programa, caso contrário, faça novo calculo.
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

       printf("\nMédia = %.2f\n",Media(n1,n2,n3,n4));

       AprovadoReprovado(Media(n1,n2,n3,n4));
	   
	  
  	   printf("\nDeseja calcular outras notas?(Sim = 1/Não = 0)\n");
       scanf("%d",&resp);
	   
		   do {
		    if ((resp != 1) && (resp != 0)) {
		   	  puts("\nResposta Inválida. Favor entrar com Sim=1 ou Não=0:\n");
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
