#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float nota[4];
	int i;
	for (i = 0; i < 3; i++) {
	printf("Entre coma %da. nota: ", (i+1));
	scanf("%f", &nota[i]);
	nota[3] = nota[3] + nota[i];
	}
	printf("Média da disciplina = %f", nota[3] / 3);	
}

