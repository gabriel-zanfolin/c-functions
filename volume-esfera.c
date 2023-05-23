#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1416
int main (void)
{
	double R, volume_esfera, pi;
	
	printf("Valor de R: ");
	scanf("%lf", &R);
	
//	pi = 3.1416;
//	volume_esfera = (4 * pi * (R*R*R)) / 3;
	volume_esfera = (4 * PI * pow(R,3)) / 3;

	printf("Volume da esfera de raio R = %.3lf\n\n", volume_esfera);

	system ("pause");
	return 0;
}
