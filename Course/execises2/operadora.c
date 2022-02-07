#include <stdio.h>

int main ()
{
    double minutos, pagar;

    printf("Digite a quantidade de minutos:");
    scanf("%lf", &minutos);

    if (minutos < 100)
    {
        pagar = 50;    
    }
    
    else 
    {
        pagar = ((minutos - 100) * 2) + 50; 

    }
    
    printf("Valor a pagar: %.2lf ", pagar);
}