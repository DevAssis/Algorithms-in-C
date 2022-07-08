


int main (void) {
	int mat[4][5];
	int l, c;
	int soma_c, soma_l;
	
	setlocale (LC_ALL, "Portuguese");
	
	for (c=0; c<5; c++){
		soma_c = 0;
		for (l=0; l<4; l++){
			printf("Entre com valor da linha %i da coluna %i : ", l, c);
			scanf("%i", &mat[l][c]);
				
		}
	
	soma_l = 0;
	}
	for (c=0; c<5; c++){
		soma_c = 0;
		for (l=0; l<4; l++){
			soma_c = soma_c + mat[l][c];	
			
		}
		printf("A soma da coluna %i é: %i\n\n", c, soma_c);
		soma_l = soma_l + soma_c;	
	}
	printf("A soma de todas as colunas é: %i", soma_l);
		
	return (0);
}
