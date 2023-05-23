#include <stdio.h>
#include <stdlib.h>
int main (void)
{
//	float media, a, b, c, d, soma;
	int a, b, c, d, soma;
	double media;
	
	printf("Digite o numero A: ");
	scanf("%d", &a);
	
	printf("Digite o numero B: ");
	scanf("%d", &b);
	
	printf("Digite o numero C: ");
	scanf("%d", &c);
	
	printf("Digite o numero D: ");
	scanf("%d", &d);
	
	soma = a + b + c + d;
//	media=(soma)/4;
	media = soma / 4.0;
	
	printf("\nA media equivale a %lf\n", media);

	system ("pause");
	return 0;
}