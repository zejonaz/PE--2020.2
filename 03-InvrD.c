#include <stdio.h>

int main(void){
    int i, aux, inv, rest;
    printf("Digite um numero de dois digitos: ");
    scanf("%d", &i);

    inv =  0;
    rest = i % 10;
    inv = 10 * inv + rest;
    aux = i / 10;
    inv = 10 * inv + aux % 10;


    printf("O numero invertido: %d", inv);

    return 0;
}
