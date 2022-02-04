#include <stdio.h>

int main() 
{
    double glic; 


    printf("Digite a medida da glicose:");
    scanf("%lf", &glic);

    if (glic <= 100)
    {
        printf("Classificação: normal");
    }
    
    else if (glic <= 140)
    {
        printf("Classificação: elevado");
    }
    else
    {
            printf("Classificação: diabetes");
    }
}