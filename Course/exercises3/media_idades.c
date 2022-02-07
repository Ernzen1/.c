#include <stdio.h> 

int main ()
{
    double idade, quant, soma, media;
    soma = 0;
    quant = 0;

    while(1)
    {
     printf("Digite as idades: ");
     scanf("%lf", &idade);
     
     if (idade < 0 && quant == 0)
     {
         printf("Impossivel calcular!");
        break;
     }
     
     quant++;
     soma += idade;
    
    if (idade < 0 && quant >= 2)
    {
         quant--;
         soma += -idade;
         media = soma / quant;
         printf("Media = %lf", media);
         break;
    }
    
    }
}