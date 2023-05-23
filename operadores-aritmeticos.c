#include <stdio.h> //biblioteca padrao para comandos de entrada e saida de dados
#include <stdlib.h>
int main (void)
{
	int valor1, valor2;
	int resp_soma, resp_subtracao, resp_multiplicacao, resp_divisao;
	
	printf("Testando operadores aritmeticos\n\n");
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &valor1);
	
	printf("Digite outro valor: ");
	scanf("%d", &valor2);
	
	resp_soma = valor1 + valor2;
	resp_subtracao = valor1 - valor2;
	resp_multiplicacao = valor1 * valor2;
	resp_divisao = valor1 / valor2;
	
	printf("\nSoma = %d", resp_soma);
	printf("\nSubtracao = %d", resp_subtracao);
	printf("\nMultiplicacao = %d", resp_multiplicacao);
	printf("\nDivisao = %d\n", resp_divisao);
	
	system ("pause");
	return (0);
}
