#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1416
int main (void)
{
	double R, area_circulo, pi;
	
	printf("Valor de R: ");
	scanf("%lf", &R);
	
//	pi = 3.1416;
//	area_circulo = pi * (R*R);		
	area_circulo = PI * pow(R,2);		

	printf("\nArea do circulo de raio R = %.3lf\n", area_circulo);

	system ("pause");
	return 0;
}
