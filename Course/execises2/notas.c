#include <stdio.h>

int main() 
{
    double nota, nota2, media;

    printf("Digite a primeira nota:");
    scanf("%lf", &nota);

    printf("Digite a segunda nota:");
    scanf("%lf", &nota2);

    media = (nota + nota2) / 2;

    printf("Nota Final %0.2lf\n", media);
    
    if (media >= 60.00)
    {
        printf("Aprovado!!");
        
    }
    
    else
    {
        printf("Reprovado!");

    }

}


