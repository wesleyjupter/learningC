#include <stdio.h>
#include <stdlib.h>
 

int main (){

int n, a, i, j, k;
 
printf("Quantos numeros deseja digitar?(1 a 100): ");
scanf("%d", &n);

 int vet1[n];
 int vet2[n];

 setbuf(stdin,NULL);

 	printf("\nInsira os valores do primeiro vetor:\n");
 	scanf("%d", &a);
 	vet1[0]=a;

	for (i=0; i<n-1; i++){
	
		scanf("%d", &a);
			
			for(j=i; j>=0; j--){
				if (a>=vet1[j]){
					vet1[j+1]=a;
					break;
				}
					
				else{
					vet1[j+1]=vet1[j];
					vet1[j]=a;
				}
			}	
	}


setbuf(stdin,NULL);

	printf("\n\nInsira os valores do segundo vetor:\n");
 	scanf("%d", &a);
 	vet2[0]=a;

	for (i=0; i<n-1; i++){
	
		scanf("%d", &a);
			
			for(j=i; j>=0; j--){
				if (a>=vet2[j]){
					vet2[j+1]=a;
					break;
				}
					
				else{
					vet2[j+1]=vet2[j];
					vet2[j]=a;
				}
			}	
	}


/*para conferir se os vetores estao ordenando de forma correta*/

printf("\nPrimeiro vetor: \n");
for (i=0; i<n; i++){

		printf ("%d", vet1[i]);
	}

	printf("\n\n");

printf("\nSegundo vetor: \n");
for (i=0; i<n; i++){

		printf ("%d", vet2[i]);
	}	

int vet_final[2*n];
    
    setbuf(stdin, NULL);

    for (i=0; i<n; i++){
    	vet_final[i]=vet1[i];
    }
    

    for(i=0; i<n; i++){
    	
    	j=0;
    	while (vet2[i]>vet_final[j])
    		j++;
    
    	for(k=2*n-1; k>j; k--){
    		vet_final[k]=vet_final[k-1];
    	}

    	vet_final[j]=vet2[i];

    }

printf("\n\nTerceiro vetor: ");

  for (i=0; i<2*n; i++){

		printf ("%d", vet_final[i]);
   } 



}	