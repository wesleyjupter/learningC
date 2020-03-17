#include <stdio.h>

int main(){

  int N, i ,a ,negativos=0 , somaneg=0;
  float media=0;


  printf("quantidade de numeros a serem inseridos: ");
  scanf("%d", &N);


  for (i=1; i<=N; i++){

      printf("\n\ninsira o primeiro valor: ");
      scanf("%d", &a);

      if (a<0){
          somaneg+=a;
          negativos+=1;
      }

  }

  media = (float)somaneg/negativos;

  printf("\nmedia dos numeros negativos: %f", media);
  printf("\n%d\n%d", somaneg, negativos);
}
