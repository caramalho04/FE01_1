// subtracao adicao multiplicacao divisao

#include <stdio.h>

int main(){
    float x,y;

    printf("Introduza dois valores:\n");
    scanf("%f %f", &x, &y);

    printf("Adicao= %.2f \nSubtracao= %.2f \nMultiplicacao=%.2f\nDivisao=%.2f ", x+y,x-y,x*y,x/y);
}
