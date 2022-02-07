#include <stdio.h>

int main () {
    int distancia;
    float combustivel, media;

    printf("Insira a distancia percorrida:");
    scanf("%d",&distancia);

    printf("Combustível gasto:");
    scanf("%f", &combustivel);

    media = distancia / combustivel;

    printf("Consumo medio = %0.3f", media);
        
}