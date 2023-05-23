#include<stdio.h>
#include<stdlib.h>
int main (void)
{
	char conceito; //variavel do tipo char armazena um unico caracter na memoria
	float nota;
	int numero;
	
	printf("Informe o conceito do aluno: ");
	scanf("%c",&conceito);
	
	printf("Digite a nota do aluno: ");
	scanf("%f",&nota);
	
	printf("Informe o numero de matricula do aluno: ");
	scanf("%d",&numero);

	
	printf("\nMatricula: %d\n", numero);
	printf("Conceito: %c\n", conceito);
	printf("Nota: %.1f\n", nota); //formatando a saida da nota com uma casa decimal
	
	system ("pause");
	return 0;
}
