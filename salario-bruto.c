#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int hr_normal, hr_extra;
	float salario, valor_hr;
	
	printf("Valor da hora: ");
	scanf("%f", &valor_hr);
	
	printf("Numero de horas normais: ");
	scanf("%d", &hr_normal);
	
	printf("Numero de horas extras: ");
	scanf("%d", &hr_extra);

	salario = (hr_normal*valor_hr) + (hr_extra*(valor_hr*2));
		
	printf("\nSalario = %.2f\n", salario);

	system ("pause");
	return 0;
}