#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char nome[10];
	int nota1;
	int nota2;
	int nota3;
	int media;
	
	printf("Digite o nome do aluno: \n");
	scanf(" %[^\n]",&nome);
	printf("Digite a primeira nota: \n");
	scanf("%d",&nota1);
	printf("Digite a segunda nota: \n");
	scanf("%d",&nota2);
	printf("Digite a terceira nota: \n");
	scanf("%d",&nota3);
	media = (nota1 + nota2 + nota3) / 3;
	if (media >=6) {
		printf("O aluno %s esta Aprovado com a media %d", nome,media);
	}
	if (media < 4 ) {
		printf("O aluno %s esta Reprovado com a media %d", nome,media);
	}
	if (media >= 4 && media < 6 ) {
		printf("O aluno %s esta em Recuperacao", nome);
	}
	
	
}
