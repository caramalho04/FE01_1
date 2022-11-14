//operações aritmeticas

#include <stdio.h>
#include <locale.h>

int adicao(float x, float y){
    float soma;
    soma= x+y;
    return soma;
}

int subtracao(float x, float y){
    float sub;
    sub=x-y;
    return sub;
}

int multiplicacao(float x, float y){
    float mult;
    mult=x*y;
    return mult;
}

int divisao(float x, float y){
    float div;
    div=x/y;
    return div;
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    float x,y,a,s,m,d,soma,sub,mult,div;
    printf("Introduza dois valores:\n");
    scanf("%f %f", &x, &y);

    a = adicao(soma);

    s = subtracao(sub);

    m = multiplicacao(mult);

    d = divisao(div);

    printf("Adição= %.2f\n Subtração= %.2f \n Multiplicação=%.2f\n Divisão=%.2f ", soma,sub,mult,div);

}