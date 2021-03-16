#include <stdio.h>

int main(void) {
    int i, j, x, y, numerador, denominado;
    printf("Digite uma fracao: ");
    scanf("%d/%d", &i, &j);
    printf("Digite uma fracao: ");
    scanf("%d/%d", &x, &y);

    numerador = i + x;
    denominado = j + y;

    printf("Resultado da soma das fracoes: %d/%d", numerador, denominado);


    return 0;
}
