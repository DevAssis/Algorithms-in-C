/* Exerc�cios com vari�veis homogeneas

8) Fa�a a entrada dos valores para uma matriz de tamanho (4x5) de valores inteiros. Em
seguida, encontre e imprima a somat�ria de cada uma das colunas da matriz. Ao final, imprima
tamb�m a somat�ria de todas as colunas.
*/

# include <stdio.h>
# include <conio.h>
# include <locale.h>


int main (void) {
	int mat[4][5];
	int l, c;
	int soma_c;
	int soma_l = 0;
	
	setlocale (LC_ALL, "Portuguese");
	
	for (c=0; c<5; c++){
		soma_c = 0;
		for (l=0; l<4; l++){
			printf("Entre com valor da linha %i da coluna %i : ", l, c);
			scanf("%i", &mat[l][c]);
			soma_c = soma_c + mat[l][c];		
		}
	printf("A soma da coluna %i �: %i\n\n", c, soma_c);
	soma_l = soma_l + soma_c;
	
	}
	printf("A soma de todas as colunas �: %i", soma_l);
	
	return (0);
}
