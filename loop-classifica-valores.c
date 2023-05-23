#include <stdio.h>
#include <stdlib.h>
 
int main(void) {
 	
	int x, maior, menor, qtd=0, soma=0;
	double media;
 	
	do {
		scanf("%d", &x);
		if (x>0){
			qtd++;
			if (qtd==1){
				maior = x;
				menor = x;
			}
			soma = soma + x;
			if (x>maior){
				maior = x;
			}
			else if (x<menor){
				menor = x;
			}
		}
	} while (x>0);
	media = soma*1.0 / qtd;
	printf("\nValor maior: %d", maior);
	printf("\nValor menor: %d", menor);
	printf("\nQuantidade de valores: %d", qtd);
	printf("\nSoma dos valores: %d", soma);
	printf("\nMedia dos valores: %.2lf\n\n", media);
	
    system("pause");
	return 0;
}
