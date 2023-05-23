#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
	int *vetor;
	int cont, Min, Max, A, i=0;
	
	do{
		printf("Digite o valor Minimo do Intervalo: ");
		scanf("%d", &Min);
		if (Min<1){
			printf("\n====================================================\n");
			printf("       {ERRO} - O numero deve ser >= 1!!!");
			printf("\n====================================================\n\n");
		}
	} while (Min<1);

	do{
		printf("Digite o valor Maximo do Intervalo: ");
		scanf("%d", &Max);
		if (Max<=Min){
			printf("\n====================================================\n");
			printf(" {ERRO} - O numero deve ser > que o ultimo valor!!!");
			printf("\n====================================================\n\n");
		}
	} while (Max<=Min);
	
	vetor = (int *)malloc(sizeof(int) * (i+1));
	printf("Digite o valor de A: ");
	scanf("%d", &A);
	for (cont=Min;cont<=Max;cont++){
		if (cont%A==0){
			vetor[i] = cont;
			i++;
		}
	}
	for(cont=0; cont<i; cont++){
		printf("\nVetor[%d] = %d", cont, vetor[cont]);
	}
	printf("\n\n");
	free(vetor);
	system("pause");
	return (0);
}
