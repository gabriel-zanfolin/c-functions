#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	int N, cont;
	double num[50], maior, menor;
	
	printf("Atencao usuario, foi declarado como variavel para entrada de dados um vetor de 50 posicoes. \nCaso deseje inserir mais valores favor alterar na declaracao de variaveis.\n");
	
	do {
		printf("\nDigite a quantidade de numeros que serao inseridos : ");
		scanf("%d", &N);
		if (N>50){
			printf("\nERRO: O vetor declarado nao suporta essa quantidade!\n");
		}
		else if (N<=0){
			printf("\nERRO: Digite um valor valido!\n");
		}
	} while (N>50 || N<=0);
	
	printf ("\n");
	
	for (cont=0; cont<N; cont++){
		printf ("Digite o numero: ");
		scanf("%lf", &num[cont]);
		if (cont==0){
			maior = num[cont];
			menor = num[cont];
		}
		else {
			if (num[cont]>maior){
				maior = num[cont];
			}
			else if (num[cont]<menor){
				menor = num[cont];
			}
		}
	}
	printf ("\nMaior valor inserido: %.2lf", maior);
	printf ("\nMenor valor inserido: %.2lf\n\n", menor);
	system ("pause");
	return 0;
}