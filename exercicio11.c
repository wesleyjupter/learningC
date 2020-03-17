#include <stdio.h>

int main(){

  int N, i ,a ,b, soma=0, produto=1, iguais=0;

  printf("quantidade de pares a serem inseridos: ");
  scanf("%d", &N);


  for (i=1; i<=N; i++){

      printf("\n\ninsira o primeiro valor: ");
      scanf("%d", &a);
      printf("insira o segundo valor: ");
      scanf("%d", &b);



      if (a>b){
          soma+=a;
          produto*=b;
      }

      else if (a<b){
          soma+=b;
          produto*=a;
      }

      else {
        iguais+=1;
        produto*=a;
        soma+=a;
      }
  }

  printf("\n soma=%d\n produto=%d\n pares iguais=%d\n", soma, produto, iguais);
}
