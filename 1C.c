#include <stdio.h>

int verifica(int x){
    switch (x)
    {
    case 1:
        printf("Matematica\n");
        break;
    
    case 2:
        printf("Fisica\n");
        break;
    
    case 3:
        printf("Portugues\n");
        break;
    }
    return 0;
}


int pedirnota(){
    float t1,t2, nota_final;

    printf("Digite a nota da primeira prova: ");
    scanf("%f",&t1);

    printf("Digite a nota da segunda prova: ");
    scanf("%f",&t2);

    nota_final= 0.4*t1 + 0.6*t2;

    return nota_final;

}


int main(){

    int x, disciplina;
    float t1,t2, nota, nota_final;

    printf("Digite o numero da disciplina: ");
    scanf("%d", &x);

    disciplina= verifica(x);
    
    nota= pedirnota(nota_final);

    printf("A nota final e: %.2f", nota);

}


