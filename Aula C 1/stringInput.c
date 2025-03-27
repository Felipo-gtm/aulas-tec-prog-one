#include<stdio.h>
int main() {
	char nome[30];
	
	printf("Digite seu nome: ");
	scanf("%9[^\n]s", &nome);

	printf("Seu nome é %s\n", nome);

	return 0;
}
