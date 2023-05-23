//Exemplo 2 Laco com contagem decrescente
#include <stdio.h>
 
int main(void)
{
	int contador;
	
	for(contador = 10; contador >= 1; contador--) //contador-- equivale a contador = contador - 1; 
	{
		printf("%d ", contador);
	}	
    return 0;
}
