int main(){
    float b, h, p, a;

    printf("Insira o comprimento da base: \t");
    scanf("%f", &b);

    printf("Insira o comprimento da altura: \t");
    scanf("%f", &h);

    a=b*h;
    p=2*(b+h);

    printf("Perimetro: \t %f \n" , p);
    printf("Area: \t %f", a);


}

