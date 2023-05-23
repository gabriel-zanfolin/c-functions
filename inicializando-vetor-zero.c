#include<stdio.h>
int main(void)
{
	int vetor[20], i;
	
	/*Inicializando o vetor com zeros */
	for (i=0;i<=19;i++){
		vetor[i]=0;
	}
	for (i=0;i<=19;i++){
		printf("vetor[%d] = %d\n", i, vetor[i]);
	}
	return 0;
}
