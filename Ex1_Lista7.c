#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>




int lim;

int ger_vet(int a){


    int i=0;
    int vet[a];
      for (i=0; i<a; i++){
        vet[i] = rand() % lim+1;
        return vet[i];
        Sleep(100);
      }
}



void linha(){
    int i;
    Sleep(500);
    for(i=0; i<25; i++);
        printf("\n");
}




int main(){

    int max, j=1, n=1;
    int vet2[n];

    printf("Escolha o tamanho maximo da sequencia e o numero do maior valor possivel a aparecer nela:\n");
    scanf("%d %d", &max, &lim);
    printf("\n\n");

    srand(time(NULL));

    for (n=1;  n<max; n++){
       for (j=1; j<=n; j++){
          vet2[j] = ger_vet(j);
          printf("%d\t\t", vet2[j]);
       }
       linha();
    }

return 0;
}



