#include <stdio.h>

int main ()
{
    float minutos, pagar;

    printf("Digite a quantidade de minutos:");
    scanf("%f", &minutos);

    if  ( minutos < 100)
    {
        pagar = 50;    
    }
    
    else {

    pagar = ((minutos - 100) * 2) + 50; 

    }
    
    printf("Valor a pagar: %.2f ", pagar);
}