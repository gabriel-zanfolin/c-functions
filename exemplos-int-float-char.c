#include<stdio.h>
#include<stdlib.h>
int main (void)
{
	char letra; //variavel do tipo char, contem caracteres
	int x; //variavel para numero inteiro
	float salario; //variavel do tipo float (real), contem casas decimais
	
	//Atribuindo valores para as variaveis
	letra = 'a';
	x = 10;
	salario = 3972.50;
	
	//Saida de dados na tela
	printf("letra = %c\n", letra);
	printf("x = %d \n", x);
	printf ("salario = %.2f \n", salario);
	system ("pause");
	return 0;
}

//	Especificadores de tipos:
//	%c para char
//	%d para int
//	%f para float
//
//	No caso, para especificar a quantidade de casas decimais para variavel float,
//	deve-se colocar apos o "%", um ".x", onde x e a quantidade de casas desejadas.
