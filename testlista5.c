#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <locale.h>


int main(){

    setlocale(LC_ALL, "Portuguese");

  int k=3;
  int numeros[k], jog1[k], jog2[k], i, count=0, acertos1=0, acertos2=0;
    printf("JOGO DA MEMORIA");
            Sleep(2000);
    printf("\n\nOs dois jogadores devem inserir as sequencias que aparecem na tela.\nO jogador que acertar mais sequencias, vence.");
            Sleep(4000);

  for(k=3; k<100; k++){
    printf("\n\n%d° rodada: %d numeros 0 a 99\n", k-2, k);

    srand(time(NULL));

            Sleep(3000);
       /*gerando numeros aleatorios*/
        for (i=0; i<k; i++){
            numeros[i]= rand() % 100;
            printf("%d\t", numeros[i]);
            Sleep(1000);

         }
            Sleep(4000);
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");/*pulando as linhas*/

            printf("Primeiro jogador, qual e a sequencia?\n");
                for (i=0; i<k; i++){
                    scanf("%d", &jog1[i]);
                }

            for (i=0; i<k; i++){
                    if (jog1[i]==numeros[i])
                       count++;
            }
                    if (count==k){
                        printf("ACERTO MIZERAVI");
                        acertos1=1;
                    }
                    else
                        printf("ERROU LEK");



            Sleep(2000);
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");/*pulando as linhas*/

             printf("Segundo jogador, qual e a sequencia?\n");
                for (i=0; i<k; i++){
                    scanf("%d", &jog2[i]);
                }
            count=0;
            for (i=0; i<k; i++){
                   if (jog2[i]==numeros[i])
                       count++;
            }
                    if (count==k){
                        printf("ACERTO MIZERAVI");
                         acertos2=1;
                        }
                    else
                        printf("ERROU SEU LERDAO");




        if(acertos1==1 && acertos2==0){
            printf("\n\nCABOU, PRIMEIRO JOGADOR VENCEU E SEGUNDO JOGADOR É UM PERDEDOR\n\n");
            k=100;
        }

        else if (acertos1==0 && acertos2==1){
            printf("\n\nCABOU, SEGUNDO JOGADOR VENCEU E PRIMEIRO JOGADOR É UM PERDEDOR\n\n");
            k=100;
        }

        else {
             printf ("\n\nPARTIU PROXIMA RODADA RAPEIZEEEE\n\n");
             acertos1=0;
             acertos2=0;
        }

 }

return 0;
}
