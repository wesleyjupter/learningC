#include <stdio.h>
#include <stdlib.h>
 

int main (){

        int n, i, j, count=0;
         
        printf("Quantos numeros deseja digitar?(1 a 100): ");
        scanf("%d", &n);

        int vet[n];

    printf("\nInsira os valores do vetor:\n");
    for (i=0; i<n; i++){
        scanf("%d", &vet[i]);
        for (j=0; j<i; j++){
            if(vet[i]==vet[j]){
                count++;
                break;
            }
        }
    }



        

                     
            
for (i=0; i<n; i++){
    printf("\nelemento %d: %d\n", i, vet[i]);
}


       printf(" \n\n %d elementos duplicados ", count);


printf("\nTotal de elementos duplicados: %d", count);


}