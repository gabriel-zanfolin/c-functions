#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i, A[5] = {19,23,29,31,37};

	printf("Valores do vetor na sequencia:\n");
	for (i=0;i<5;i++){
		if (i==4){
			printf("%d", A[i]);
		}
		else {
			printf("%d - ", A[i]);
		}
	}
	printf("\n\nValores do vetor de tras para frente:\n");
	for (i=4;i>=0;i--){
		if (i==0){
			printf("%d", A[i]);
		}
		else {
			printf("%d - ", A[i]);
		}
	}
	printf("\n");	
    system("pause");
	return 0;
}
