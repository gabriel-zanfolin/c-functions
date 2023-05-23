#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	double num1, num2, num3;
	
	printf("Digite o valor para um lado do triangulo: ");
	scanf("%lf", &num1);
	
	printf("Digite o valor para outro lado do triangulo: ");
	scanf("%lf", &num2);
	
	printf("Digite o valor para outro lado do triangulo: ");
	scanf("%lf", &num3);
	
	if(num1+num2>num3 && num1+num3>num2 && num2+num3>num1)
	{
		printf("\nEh triangulo!");
		if(num1==num2 && num2==num3)
		{
			printf("\nO triangulo eh equilatero.\n\n");
		}
		else
		{
			if(num1==num2 || num1==num3 || num2==num3)
			{
				printf("\nO triangulo eh isosceles.\n\n");
			}
			else
			{
				printf("\nO triangulo eh escaleno.\n\n");
			}
		}
	}
	else
	{
		printf("\nNao eh triangulo!\n\n");
	}
	system ("pause");
	return (0);
}