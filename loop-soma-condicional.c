#include <stdio.h>
#include <stdlib.h>
 
int main(void) {
 	
	int x, soma_pos=0, soma_neg=0;
 	
	do {
		scanf("%d", &x);
		if (x>0){
			soma_pos = soma_pos + x;
		}
		else if (x<0){
			soma_neg = soma_neg + x;
		}
	} while (x!=0);
	
	printf("\nTotal dos positivos = %d", soma_pos);
	printf("\nTotal dos negativos = %d\n\n", soma_neg);
    system("pause");
	return 0;
}
