#include <stdio.h>
int main(void){
    int hours, minutes;
    printf("Informe um horario: ");
    scanf("%d:%d", &hours, &minutes);

    if (hours > 12){
        hours = hours - 12;
        if(hours < 10){
                printf("Resposta: 0%d:%d", hours, minutes);
        }
        else{
            printf("Resposta: %d:%d", hours, minutes);
        }
    }
    else{
            if(hours < 10){
                printf("Resposta: 0%d:%d", hours, minutes);
            }
            else
                printf("Resposta: %d:%d", hours, minutes);
    }

    return 0;
}
