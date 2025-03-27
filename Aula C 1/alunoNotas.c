#include<stdio.h>
int main () {
	//Programa deve ler nome no aluno e suas 4 notas, e entao calcular a media das notas, e mostrar todas as informações
	//Variaveis
	char nome[30];
	int n1, n2, n3, n4, media;

	//Saudação
	printf("Este programa calcula a média das notas de um aluno.\n\n");

	//Input
	printf("Nome do Aluno: ");
	scanf("%[^\n]", nome);
	getchar();

	printf("Nota 1: ");
	scanf("%i", &n1);

	printf("Nota 2: ");
	scanf("%i", &n2);

	printf("Nota 3: ");
	scanf("%i", &n3);

	printf("Nota 4: ");
	scanf("%i", &n4);

	//Calculo
	media = (n1 + n2 + n3 + n4)/4;

	//Linha pra organizar
	printf("-------------------------\n");
	//Output
	printf("Notas e media do aluno %s:\n", nome);
	printf("\n");
	printf("Nota 1: %i\n", n1);
	printf("Nota 2: %i\n", n2);
	printf("Nota 3: %i\n", n3);
	printf("Nota 4: %i\n", n4);
	printf("\n");
	printf("Media final: %i\n", media);
}
