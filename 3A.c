//calcule consumo aos 100km
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int litros_consumidos, km_percorridos;
    float consumo;

    printf("Digite a quantidade de litros consumidos: ");
    scanf("%d",&litros_consumidos);

    printf("Digite a quantidade de km percorridos: ");
    scanf("%d",&km_percorridos);

    consumo = (litros_consumidos*100)/km_percorridos;

    printf("O consumo de combustivel = %.2f litros por 100km",consumo);

}