#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int v[10] = {2, 6, 8, 3, 10, 9, 1, 21, 33, 14};
	int x = 2;
	int y = 4;
	printf("%d \n", v[x + 1]);
	printf("%d \n", v[x] + 1);
	printf("%d \n", v[x + y]);
	printf("%d \n", v[8 - v[2]]);
	printf("%d \n", v[v[v[7]]]);
	return 0;
}

