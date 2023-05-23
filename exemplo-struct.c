#include<stdio.h>
int main (void)
{
	struct ficha_aluno //tipo de dado
	{
		char nome[40];
		int numero;
		float nota;
	};//definição da struct
	
	struct ficha_aluno aluno;//declaraçãp da variavel aluno que é do tipo struct ficha_aluno
	
	printf("\n--------- Cadastro de aluno ---------\n\n");
	
	printf("Nome do aluno: ");
	fgets(aluno.nome, 40, stdin);

	printf("Digite o numero do aluno: ");
	scanf("%d", &aluno.numero);

	printf("Digite a nota do aluno: ");
	scanf("%f", &aluno.nota);
	
	printf("\n\n-------- Lendo os dados da struct --------\n\n");
	printf("Nome ...............: %s", aluno.nome);
	printf("Numero .............: %d \n", aluno.numero);
	printf("Nota ...............: %.2f \n", aluno.nota);
	
	
	return(0);
}
