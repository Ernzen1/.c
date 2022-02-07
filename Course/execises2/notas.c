#include <stdio.h>

int main() 
{
    float nota, nota2, media;

    printf("Digite a primeira nota:");
    scanf("%f", &nota);

    printf("Digite a segunda nota:");
    scanf("%f", &nota2);

    media = (nota + nota2);

   printf("Nota Final %0.1f\n", media);
    
    if (media >= 60.00/* condition */)
    {
        printf("Aprovado!!");
        /* code */
    }
    
    else{
        printf("Reprovado >:(");


    }


}


