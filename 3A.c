//calcular consumo de combustivel

#include <stdio.h>

int main(){
    float a,b,x;

    printf("Introduza a distancia percorrida\n");
    scanf("%f", &a);

    printf("Introduza o combustivel gasto\n");
    scanf("%f", &b);

    x=b/a*100;

    printf("Consumo= %.2f", x);
}
