#include <stdio.h>

int main ()
{
    int segundos, minutos, horas ;

    printf("Digite a duraçao em segundos:");
    scanf("%d", &segundos);

    horas = segundos / 3600;
    segundos -= horas * 3600;


    minutos = segundos / 60;
    segundos -= minutos * 60;

    printf("%d:%d:%d", horas, minutos, segundos);



    

    
}