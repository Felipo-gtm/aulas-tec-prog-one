#include<stdio.h>
int main() {
	//Variaveis
	char nome[30], endereco[50], numero[10], bairro[20], cidade[30], estadoUF[2];

	printf("Informe as seguintes informações:\n");

	//Inputs
	printf("Nome: ");
	scanf("%[^\n]", nome);
	getchar();

	printf("Endereço: ");
	scanf("%[^\n]", endereco);
	getchar();

	printf("Numero: ");
	scanf("%[^\n]", numero);
	getchar();

	printf("bairro: ");
	scanf("%[^\n]", bairro);
	getchar();

	printf("Cidade: ");
	scanf("%[^\n]", cidade);
	getchar();

	printf("UF (Sigla do Estado): ");
	scanf("%[^\n]", estadoUF);

	//Linha pra organizar
	printf("-----------------------------\n");
	//Outputs
	printf("Suas informações são:\n");

	printf("Nome: %s\n", nome);
	printf("Endereço: %s\n", endereco);
	printf("Número: %s\n", numero);
	printf("Bairro: %s\n", bairro);
	printf("Cidade: %s\n", cidade);
	printf("Estado: %s\n", estadoUF);

	return 0;
}
