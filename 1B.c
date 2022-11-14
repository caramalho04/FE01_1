#include <stdio.h>

int main(){
    float t1,t2, notafinal;
    char  nome;

    printf("Introduza o nome do aluno:\n");
    scanf("%s", &nome);

    printf("Digite a nota da primeira prova:\n ");
    scanf("%f",&t1);

    printf("Digite a nota da segunda prova:\n ");
    scanf("%f",&t2);

    notafinal = (t1*0.4) + (0.6*t2);

    printf("A nota final do %c = %f",nome ,notafinal);
}