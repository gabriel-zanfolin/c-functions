#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int num;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &num);
	
	if (num%2 == 0)
	{
		printf("\nO numero digitado eh um numero par!\n\n");
	}
	else
	{
		printf("\nO numero digitado eh um numero impar!\n\n");	
	}
	system ("pause");
	return (0);
}
