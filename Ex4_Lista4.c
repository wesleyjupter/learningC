
#include <stdio.h>
#include <stdlib.h>

int main(){
	
int m, i, j, x;

printf("Digite a ordem da matriz: ");
scanf("%d", &m);

int matriz[m][m];

printf("\n\n");

for (i=0; i<m; i++){

	int c=i+1;
	printf("Insira os elementos da coluna %d: \n", c);

		for(j=0; j<m; j++){

			scanf("%d", &x);

			matriz[i][j]=x;
		}
	}


printf("\n\n\nMatriz transposta:\n");

for (i=0; i<m; i++){
	for(j=0; j<m; j++){

		printf("\t%d\t", matriz[i][j]);

	}
printf("\n");	
}
printf("\n	diferença	das	somas	dos elementos	das	suas	diagonais = 0");
}

