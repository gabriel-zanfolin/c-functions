#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (void)
{
	int a, b, c;
	double raiz1, raiz2, delta;
	
	printf("Digite o valor de A: ");
	scanf("%d", &a);
	
	printf("Digite o valor de B: ");
	scanf("%d", &b);
	
	printf("Digite o valor de C: ");
	scanf("%d", &c);
	
	delta = sqrt((pow(b,2) - 4*a*c));
	
	if (delta > 0)
	{
		raiz1 = (-b + delta) / 2*a;
		raiz2 = (-b - delta) / 2*a;
		printf("\nExistem duas raizes!!!\n");
		printf("\nX1 = %.2lf\n", raiz1);
		printf("X2 = %.2lf\n\n", raiz2);
	}
	else
	{
		if (delta == 0)
		{
			raiz1 = (-b + delta) / 2*a;
			printf("\nExiste apenas uma raiz!!!\n");
			printf("\nX = %.2lf\n", raiz1);
		}
		else
		{
			printf("\nNao ha raizes!!!\n");
		}
	}
	system ("pause");
	return (0);
}