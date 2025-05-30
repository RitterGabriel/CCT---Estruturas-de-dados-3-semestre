#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *pont_arq;
	int r;
	
	pont_arq = fopen("arquivo2.txt", "w");
	if (pont_arq == NULL) {
		printf ("Erro ao tentar abrir o arquivo!");
		exit(1);
	}
	r = fputs("Programando em C.", pont_arq);
	
	if(r == EOF) {
		printf("Erro ao tentar gravar os dados! \n");
	}
	else {
		printf("Dados gravados com sucesso. \n");
	}
}
