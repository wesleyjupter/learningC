#include <stdio.h>


int main(){
    float a,b;

    printf("insira o valor de a:\t");
    scanf("%f", &a);
    printf("insira o valor de b:\t");
    scanf("%f", &b);


    if (a>b){
        printf("a maior que b");
    }

    if (a<b){
        printf("b maior que a");
    }

    if (a==b){
        printf("IGUAIS");
    }
    return 0;
}
