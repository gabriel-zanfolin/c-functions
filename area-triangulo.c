#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	float base, altura, area;
	
	printf ("Digite a base do triangulo: ");
	scanf ("%f", &base);
	
	printf ("Digite a altura do triangulo: ");
	scanf ("%f", &altura);
	
	area = (base * altura)/2;
	
	printf ("\nA area do triangulo equivale a: %.2f\n", area);

	system ("pause");
	return (0);
}