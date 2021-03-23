#include <stdio.h>

int main(void){

    int num, larnum;
    larnum = 0;
    printf("Digite o numero 0 para executar o programa\nDigite um numero: ");
    scanf("%d", &num);
    while(num != 0){
        printf("Digite um numero: ");
        scanf("%d", &num);
        if(num > larnum){
            larnum = num;
        }

    }
    printf("O maior numero e: %d", larnum);

    return 0;
}

