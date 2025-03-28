#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char nomeTrabalhador[20];
	int salHora;
	int horasMes;
	int salBruto;
	int salLiquido;
	int escolha;
	while(1) {
		printf("Digite 1 para continuar e 0 para parar: \n");
		scanf("%d",&escolha);
		if (escolha == 1) {
			printf("Digite o nome do trabalhador: ");
			scanf(" %[^\n]",&nomeTrabalhador);
			printf("Qual o valor do salario por hora?: ");
			scanf("%d",&salHora);
			printf("Qual o numero de horas trabalhadas por mes?: ");
			scanf("%d",&horasMes);
			salBruto = salHora * horasMes;
			printf("O salario bruto e: %d\n",salBruto);
			salLiquido = salBruto - 111,10;
			printf("O salario liquido e: %d\n", salLiquido);
		} 
		else
			break;
	}
	
	
	
}
