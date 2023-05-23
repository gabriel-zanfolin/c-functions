#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	char S[6];
	
	strcpy(S,"Fatec"); //isto equivale a atribuição de string -> S = "Fatec";
	printf("%s", S);
	
	printf("\n\nFim do Programa\n");
	system("pause");
	return(0);
}
// a função strcpy faz a conversao para string, porém vale salientar a utilização necessária do vetor no inicio do processo:
// o vetor deve possuir no minimo a quantidade de posições necessárias para a palavra + 1, isso porque é reserva no vetor uma posição para o caracter nulo.
