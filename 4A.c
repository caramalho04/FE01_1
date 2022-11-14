#include <stdio.h>

int main(){
    float taxa =1.17; 
    float euro, dolar;
    printf("Digite o valor em euros: ");
    scanf("%f", &euro);
    dolar = euro * taxa;
    printf("O valor em dolares: %.2f\n", dolar);
}