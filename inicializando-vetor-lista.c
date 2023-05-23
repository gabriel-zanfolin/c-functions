#include<stdio.h>
int main(void)
{
	/*Declarando e atribuindo valores ao vetor*/
	int i;
	/*Inicializando o vetor com listas de valores*/
	int vet[] = {19,19,19,19,19,19};
	/*Se fosse desejado inicializar o vetor com todos os valores zerados eh possivel fazer da seguinte forma:
	int vet[6] = {0};
	Essa logica nao eh valida se desejar usar outro valor numerico*/
	
	/*Imprindo os valores do vetor */
	for (i=0;i<=5;i++){
		printf("vetor[%d] = %d\n", i, vetor[i]);
	}
	return 0;
}
