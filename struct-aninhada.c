//usando struct dentro de struct
#include<stdio.h>
#include<stdlib.h>

//criação da struct tp_endereco
struct tp_endereco
{
	char rsrsrua[40];
	int numero;
	char bairro[40];
	char cidade[40];
	char estado[3];
	int cep;
};//não foi associada nenhuma var à struct ainda...

//criação da struct tp_data_nascimento
struct tp_data_nascimento
{
	int dia;
	int mes;
	int ano;
};//não associei nenhuma var à struct ainda, isto será feito dentro da próxima struct

struct cadastro_cliente
{
	char nome_cliente[40];
	int telefone;
	//declarando variavel associada à struct tp_endereco
	struct tp_endereco endereco;

	//declarando variavel associada à struct tp_data_nascimento	
	struct tp_data_nascimento data_nascimento;
}
cad_cliente[2];

//Programa principal
int main(void)
{
	int i;
	
	printf("\n\n-------- Cadastro de clientes --------\n\n");
	
	//Armazenando os dados do cadastro dentro da struct cad_cliente
	for (i=0;i<2;i++){
		printf("\n\nNome do cliente.......: ");
		fflush(stdin);
		gets(cad_cliente[i].nome_cliente);
		
		printf("\nDigite o telefone do cliente.....:");
		scanf("%d", &cad_cliente[i].telefone);
		
		printf("\nDigite a rua........: ");
		fflush(stdin);
		gets(cad_cliente[i].endereco.rua);
		
		printf("\nDigite o numero........: ");
		scanf("%d", &cad_cliente[i].endereco.numero);
		
		printf("\nBairro........: ");
		fflush(stdin);
		gets(cad_cliente[i].endereco.bairro);
		
		printf("\nCidade........: ");
		fflush(stdin);
		gets(cad_cliente[i].endereco.cidade);
		
		printf("\nEstado........: ");
		fflush(stdin);
		gets(cad_cliente[i].endereco.estado);
		
		printf("\nDigite o CEP........: ");
		scanf("%d", &cad_cliente[i].endereco.cep);


		printf("\nDia de nascimento........: ");
		scanf("%d", &cad_cliente[i].data_nascimento.dia);

		printf("\nMes de nascimento........: ");
		scanf("%d", &cad_cliente[i].data_nascimento.dia);

		printf("\nAno de nascimento........: ");
		scanf("%d", &cad_cliente[i].data_nascimento.dia);
	} //fim da coleta
	
	printf("\n\n--------- Dados do cliente ---------\n\n");
	
	//Percorrer o vetor de struct cad_cliente
	
	for (i=0;i<2;i++){
		printf("\n Nome...........: %s", cad_cliente[i].nome_cliente);
		printf("\n Rua............: %s", cad_cliente[i].endereco.rua);
		printf("\n Numero.........: %d", cad_cliente[i].endereco.numero);
		printf("\n Bairro.........: %s", cad_cliente[i].endereco.bairro);
		printf("\n Cidade.........: %s", cad_cliente[i].endereco.cidade);
		printf("\n Estado.........: %s", cad_cliente[i].endereco.estado);
		printf("\n Cep............: %d", cad_cliente[i].endereco.cep);
		
		printf("\n Dia de Nasc....: %d", cad_cliente[i].data_nascimento.dia);
		printf("\n Mes de Nasc....: %d", cad_cliente[i].data_nascimento.mes);
		printf("\n Ano de Nasc....: %d", cad_cliente[i].data_nascimento.ano);
		printf("\n\n------------------------------------\n\n");
	}	
	
	system("pause");
	return 0;
}
