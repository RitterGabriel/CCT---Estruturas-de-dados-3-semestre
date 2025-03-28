#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char nome[10];
	int escolha;
	char nomeConjuge[10];
	
	printf("Digite o seu nome: ");
	scanf(" %[^\n]",&nome);
	printf("1-Solteiro(a)\n");
	printf("2-Separado(a)\n");
	printf("3-Casado(a)\n");
	printf("4-Divorciado(a)\n");
	printf("5-Viuvo(a)\n");
	printf("Qual o seu estado civil?: \n");
	scanf("%d",&escolha);
	switch(escolha) {
		case 1: printf("Seu nome e %s e voce esta Solteiro(a)\n",nome);
		break;
		case 2: printf("Seu nome e %s e voce esta Separado(a)\n",nome);
		break;
		case 3: printf("Digite o nome do seu conjuge: \n");
				scanf(" %[^\n]",&nomeConjuge);
		printf("Seu nome e %s e voce esta Casado(a) com %s\n",nome,nomeConjuge);
		break;
		case 4: printf("Seu nome e %s e voce esta Divorciado(a)\n",nome);
		break;
		case 5: printf("Seu nome e %s e voce esta Viuvo(a)\n",nome);
		break;
		default: printf("Escolha Invalida\n");
		
	}	
}
