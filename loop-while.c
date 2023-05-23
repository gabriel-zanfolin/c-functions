#include <stdio.h>
 
int main(void)
{
	int contador = 1; //declarando e inicializando a variavel de controle
	
	while (contador <= 10) //testando a condicao
	{
		printf("%d ", contador); //executando um comando dentro do laco
		
		contador++; //atualizando a variavel de controle
	}
    return 0;
}
