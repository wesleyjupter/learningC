#include <stdio.h>

int main(){

  int N, i ,a , somaneg=0;

  printf("quantidade de numeros a serem inseridos: ");
  scanf("%d", &N);


  for (i=1; i<=N; i++){

      printf("\n\ninsira o primeiro valor: ");
      scanf("%d", &a);

      if (a<0){
          somaneg+=a;
      }

  }

  printf("\nsoma dos numeros negativos: %d", somaneg);
}
