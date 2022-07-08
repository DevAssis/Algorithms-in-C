/* Exercicios com estrutura de decis�o m�ltipla escolha:

3) Elabore um algoritmo que monte um menu com as seguintes op��es:
1 � Exerc�cio 1
2 � Exerc�cio 2
4 � Exerc�cio 4
5 � Fim
Se o usu�rio executar a op��o 1, o algoritmo deve executar o exerc�cio 1 desta lista.
Se o usu�rio executar a op��o 2, o algoritmo deve executar o exerc�cio 2 desta lista.
Se o usu�rio executar a op��o 4, o algoritmo deve executar o exerc�cio 4 desta lista.
Se o usu�rio executar a op��o 5, o algoritmo deve finalizar a execu��o do algoritmo com a
mensgem,"fim de execu��o - tudo de bom.".
Caso seja informado um numero diferente de 1, 2 4 e 5, o algoritmo deve emitir a mensagem
de op��o inv�lida e voltar a pedir uma op��o de menu novamente.
*/

#include <stdio.h>;
#include <conio.h>;
#include <locale.h>;

int main(void){
	int opcao, validacao;	
	
	setlocale(LC_ALL, "Portuguese");
		
	puts("Escolha uma das op��es:\n\n");
    puts("1-Exerc�cio 1");
	puts("2-Exerc�cio 2");
	puts("4-Exerc�cio 4");
	puts("5-Fim\n") ;
	
	do {
		printf("\nOp��o : ");
		scanf("%i", &opcao);  
		
		if ((opcao!=1)&& (opcao!=2) && (opcao!=4) && (opcao!=5)){
			validacao = 0;
			puts("Op��o Invalida. Digite umas das op��es");
		} 
		else {
			validacao = 1;
		}	
	}while (validacao == 0);
	
	switch (opcao) {
		case 1:{
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
			
			break;
		}
		
		case 2:{
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
  			
			break;
		}
		
		case 4:{
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
												
			break;
		}
		
		case 5:{
			puts("\n\nfim de execu��o - tudo de bom.\n\n");
			
			break;
		}
		
		default:{
			puts("\n\nOp��o Inv�lida");
			
			break;
		}
		
	}
		
	puts("\n\nObrigado");
	return 0;
}



