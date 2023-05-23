#include <stdio.h>
 
int main(void)
{
	int contador; //variavel de controle do loop
	
	for(contador = 1; contador <= 10; contador++)
	{
		printf("%d ", contador);
	}
	
    return 0;
}
/*
for(valor_inicial; condicao_final; valor_incremento)
{
	instrucoes;
}
*/
