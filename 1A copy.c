//nota final disciplina 

#include <stdio.h>

int main(){
    float t1,t2, notafinal;
    printf("Digite a nota da primeira prova: ");
    scanf("%f",&t1);
    printf("Digite a nota da segunda prova: ");
    scanf("%f",&t2);

    notafinal = (t1*0.4) + (0.6*t2);
    printf("A nota final da disciplina= %f",notafinal);
}