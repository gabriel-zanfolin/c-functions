#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
	int *vetor;
	int cont, N, X;
	bool encontrou=false;
	
	do{
		printf("Digite a quantidade de elementos do vetor: ");
		scanf("%d", &N);
		if (N<=0){
			printf("\n============================================\n");
			printf("               Valor Invalido!!!");
			printf("\n============================================\n\n");
		}
	} while (N<=0);
	
	vetor = (int *)malloc(sizeof(int) * N);
	
	srand(time(NULL));
	for(cont=0; cont<N; cont++){
		vetor[cont] = rand() % 101;
		printf("\nVetor[%d] = %d", cont, vetor[cont]);
	}
	
	printf("\n\nInforme o valor de X:");
	scanf("%d", &X);
	for(cont=0; cont<N; cont++){
		if (vetor[cont]==X){
			printf("\nO valor pesquisado esta presente na posicao [%d] do Vetor!", cont);
			encontrou = true;
		}
	}
	if (encontrou==false){
		printf("\nO valor pesquisado nao esta presente no Vetor!");
	}
	printf("\n\n");
	free(vetor);
	system("pause");
	return (0);
}
