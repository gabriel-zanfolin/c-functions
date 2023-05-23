#include<stdio.h>

int main(void)
{
	char nome[21]; //string é uma variavel que armazena uma cadeia de caracteres
	
	printf("Digite o seu nome: ");
	//scanf("%s", nome); //esse metodo nao funciona para nomes compostos ou frases, pois o espaço "" faz com que o scanf finalize
	
	fgets(nome,21,stdin); //leitura da string
	
	printf("O nome armazenado foi: %s", nome);
	return 0;
}
