#include <stdio.h>

int main(){
    int litros_consumidos, km_percorridos;
    float consumo,preco, custo;

    printf("Digite a quantidade de litros consumidos: ");
    scanf("%d",&litros_consumidos);

    printf("Digite a quantidade de km percorridos: ");
    scanf("%d",&km_percorridos);

    printf("Qual o preco do combustivel? ");
    scanf("%f",&preco);

    consumo = (litros_consumidos*100)/km_percorridos;
    custo = litros_consumidos*preco;

    printf("O custo da viagem= %.2f",custo);
}