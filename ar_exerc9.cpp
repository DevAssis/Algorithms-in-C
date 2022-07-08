/* Exerc�cios com vari�vel heterogenea

9) Desenvolva um algoritmo que crie uma vari�vel do tipo struct com os seguintes dados
(relativos a 5 clientes): c�digo, nome, endere�o, data de nascimento (deve ser um vetor de 3
posi��es onde armazene dia na primeira posi��o, m�s na segunda e ano na terceira), sexo,
valor total devido, valor total em cr�dito, idade e status do cadastro (ativo ou inativo). Quando o
usu�rio executar o algoritmo, o mesmo deve cadastrar os clientes e ao t�rmico dos cadastros,
deve emitir um relat�rio com os dados dos clientes cadastrados. Antes da finaliza��o do
algoritmo, deve ser emitida uma mensagem perguntando ao usu�rio se ele deseja executar o
algoritmo novamente, em caso afirmativo o algoritmo deve ser executado novamente, em caso
negativo, deve ser emitida uma mensagem alertando o usu�rio do final de execu��o do
algoritmo.
*/

# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main (void) {
	struct cad {
		int codigo;
		char nome[50];
		char end[100];
		int data[3];
		char sexo;
		float vt_dev, vt_cred;
		int idade;
		char status;
	};
	struct cad cliente[5];
	int i, cont=0;
	char continua = 'S';
	int validacao = 1;
		
	setlocale (LC_ALL, "Portuguese");
	
	do {
	   	puts("\nCADASTRO DE CLIENTES:\n");
		for (i=0; i < 5; i++){
			cont++;
			printf("\n\nEntrada de Dados do Cliente %i:\n", cont);
			puts("\nDigite o codigo do cliente:");
			scanf("%i", &cliente[i].codigo);
			fflush(stdin);
			puts("\nDigite o Nome: ");
			gets(cliente[i].nome);
			fflush(stdin);
			puts("\nDigite o Endere�o: ");
			gets(cliente[i].end);
			fflush(stdin);
			puts("\nDigite o dia de nascimento: ");
			scanf("%i", &cliente[i].data[0]);
			fflush(stdin);
			puts("\nDigite o m�s de nascimento: ");
			scanf("%i", &cliente[i].data[1]);
			fflush(stdin);
			puts("\nDigite o ano de nascimento: ");
			scanf("%i", &cliente[i].data[2]);
			fflush(stdin);
			puts("\nDigite o sexo(M/F):");
			cliente[i].sexo = getche();
			fflush(stdin);
			puts("\n\nDigite o Valor em d�bito: ");
			scanf("%f", &cliente[i].vt_dev);
			fflush(stdin);
			puts("\nDigite o Valor em cr�dito: ");
			scanf("%f", &cliente[i].vt_cred);
			fflush(stdin);
			puts("\nDigite a idade: ");
			scanf("%i", &cliente[i].idade);
			fflush(stdin);
			puts("\nDigite o status ativo(A) ou Inativo (I):");
			cliente[i].status = getche();
			fflush(stdin);
		}
		puts("\n\nRELATORIO DE CLIENTES:\n\n");	
		i=0;
		cont = 0;
		for (i=0;i<5;i++){
		
			printf("DADOS DO CLIENTE %i:\n\n", cont=cont+1);
			printf("\nCodigo do cliente: %i", cliente[i].codigo);
			printf("\nNome do cliente: %s", cliente[i].nome);
			printf("\nData de Nascimento do cliente: %i-%i-%i", cliente[i].data[0], cliente[i].data[1], cliente[i].data[2]);
			printf("\nSexo do cliente: %c", cliente[i].sexo);
			printf("\nValor em d�bito do cliente: %0.2f", cliente[i].vt_dev);
			printf("\nValor em cr�dido do cliente: %0.2f", cliente[i].vt_cred);
			printf("\nIdade do cliente: %i", cliente[i].idade);
			printf("\nStatus do cliente: %c\n\n", cliente[i].status);
			
		}	
		
		puts("\nDeseja continuar o cadastro (S/N)?:");
		continua = getche();
		do {
			if ((continua != 'S') && (continua != 's') && (continua != 'N') && (continua != 'n')) {
				puts("\nResposta Inv�lida. Favor entrar com S ou N:\n");
				continua = getche();
				validacao = 0;
			}
			else {
				validacao = 1;
			}
					
		} while (validacao == 0);
		

	} while (validacao == 1);
		
	return (0);
}



