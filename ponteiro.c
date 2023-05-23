#include<stdio.h>
#include<conio.h>

int main(void)
{
	//valor é a variável que será apontada pelo ponteiro
	int valor = 27;
	
	//declaração de variável ponteiro
	int *ptr;
	
	//atribuindo o endereço da variável valor ao ponteiro
	ptr = &valor;
	
	printf("Utilizando ponteiros\n\n");
	printf("Conteudo da variavel valor: %d\n", valor);
	printf("Endereco da variavel valor: %x\n", &valor); //%x serve para hexadecimais, e todo endereco de variavel é do tipo hexadecimal
	printf("Conteudo da variavel ponteiro ptr: %x", ptr);
	
	getch();
	return(0);
}
