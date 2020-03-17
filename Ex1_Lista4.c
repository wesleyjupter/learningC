 
 #include <stdio.h>
 #include <stdlib.h>
 

int main (){

int n, position, number, j;
 
printf("Quantos numeros deseja digitar?(1 a 100): ");
scanf("%d", &n);

 int vet[n];

 		for (position=0; position<n; position++){
 			
 			printf("Insira um numero: ");
 			scanf("%d",&number);
 				j=n-1-position;
 			vet[j]=number;

 		}
	for (position=0; position<n; position++){

		printf ("\n%d", vet[position]);
	}

}	