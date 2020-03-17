#include <stdio.h>

int main(){

  int N, i ,a , negativos=0;

  printf("quantidade de numeros a serem inseridos: ");
  scanf("%d", &N);


  for (i=1; i<=N; i++){

      printf("\n\ninsira o primeiro valor: ");
      scanf("%d", &a);

      if (a<0){
          negativos+=1;
      }

  }

  printf("\n%d numeros negativos", negativos);
}
