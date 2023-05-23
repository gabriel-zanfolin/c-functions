#include <stdio.h>
#include <stdlib.h>
 
int main(void) {
	
	int num, cont, aux=0;
 	
	printf("Digite um valor: ");
	scanf("%d", &num);
	for (cont=1; cont<=num; cont++){
		if (num%cont==0){
			aux++;
		}
	}
	if (aux>2){
		printf ("\nO numero digitado nao eh primo!\n");
	}
	else{
		printf ("\nO numero digitado eh primo!\n");
	}
	printf("\n\n");
	system("pause");
	return 0;
}
