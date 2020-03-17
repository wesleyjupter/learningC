#include <stdio.h>


int main(){
    float a,soma, media;
    int i;

    for (i=1; i<=20; i++){

       printf("insira o valor:\t");
       scanf("%f", &a);

       soma += a;

    }

    media = soma/20;

    printf("media:\t %f", media);

    return 0;
}
