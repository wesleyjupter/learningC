#include <stdio.h>

int main(){
	int a, b, c, d;

	printf("Quais os limites de tamanho da matriz de 4 dimensoes?\n");
	scanf("%d %d %d %d", &a, &b, &c, &d);

	int vet[a][b][c][d];

	printf("\nlimites de tamanho = %dx%dx%dx%d", a,b,c,d);
	printf("\nnumero de elementos = %d\n", a*b*c*d);

	}