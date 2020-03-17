int main(){
    int a,b,c,d,e,soma,produto;
    float media;


    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);



 soma = a+b+c+d+e;
 produto = a*b*c*d*e;

 media = (float)soma/5;


 printf("soma: %d \n produto: %d \n media: %f",  soma, produto, media);

}
