int main(){
    int idade, meses, dias, anos, diastot;

    printf("Insira sua idade em anos, meses e dias");
    printf("\n anos:\t");
    scanf("%d",&anos);

    printf("\n meses:\t");
    scanf("%d", &meses);

    printf("\n dias:\t");
    scanf("%d", &dias);

    diastot = dias + 30*meses + 12*30*anos;

    printf("idade em dias: \t %d", diastot);


}

