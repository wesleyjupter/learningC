#include <stdio.h>


int main(){
    float densidade,massa,volume;


    printf("massa:\t");
    scanf("%f", &massa);
    printf("volume:\t");
    scanf("%f", &volume);


  densidade = massa/volume;

  printf("densidade:\t%f", densidade);
return 0;
}
