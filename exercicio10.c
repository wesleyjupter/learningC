#include <stdio.h>


int main(){
    float menor=0.0,maior=0.0,a, b;
    int i;

    printf("insira o valor:\t");
    scanf("%f", &a);
    menor = a;
    maior = a;

    for (i=1; i<=2; i++){

        printf("insira o valor:\t");
        scanf("%f", &b);

        if(b<menor){
            menor = b;
        }

        else if (b>maior){
            maior = b;
        }
    }

    if (maior == menor){
        printf("TODOS IGUAIS");
    }
    else {
        printf("maior: %f\nmenor: %f", maior, menor);
    }

    return 0;
}
