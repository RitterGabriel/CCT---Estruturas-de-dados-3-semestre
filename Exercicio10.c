#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *pont_arq;
	char c;
	
	pont_arq = fopen("arquivo2.txt", "r");
	if (pont_arq == NULL) {
		printf ("Erro ao tentar abrir o arquivo!");
		exit(1);
	}
	printf("Lendo e exibindo os dados do arquivo \n\n");
	
	do {
		c = fgetc(pont_arq);
		printf("%c", c);
	} 
	while (c != EOF);
	fclose(pont_arq);
	system("pause");
	return(0);
	
}
