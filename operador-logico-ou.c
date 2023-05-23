#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	float limite_min = 5.0, limite_max = 12.0, temperatura;
	
	printf("Informe o valor da temperatura: ");
	scanf("%f", &temperatura);
	
	//se(temperatura > limite_max OU temperatura < limite_min)
//	if (!(temperatura > limite_max || temperatura < limite_min)) --> Operador Logico NAO
	if (temperatura > limite_max || temperatura < limite_min)
	{
		printf("Alerta: Temperatura fora da faixa permitida!!! \n");
	}
	else
	{
		printf("Temperatura OK \n");
	}
	system("pause");
	return (0);
}
