#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, j, matriz[3][3] = {{1, 2, 3}, {2, 3, 4}};
	for(i = 0; i < 3; i++) {
		printf("\n");
		for(j = 0; j < 3; j++) {
			printf("%d", matriz[i][j]);
		}
	}
	return 0;
}

