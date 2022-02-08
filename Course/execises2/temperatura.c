#include <stdio.h>

int main (){
    char esc, C, F;
    double fa, cel, temp, div;

    printf("Qual a escala da temperatura? (C/F)");
    scanf("%c", &esc);

    if (esc == 'F')
    {
        printf("Digite a temperatura em Fahrenheit:");
        scanf("%lf", &fa);
        temp = 0.555 * (fa - 32);
        
        printf("Temperatura equivalente em Celsius: %lf", temp);
    }
    
    else if (esc == 'C')
    {
        printf("Digite a temperatura em Celsius:");
        scanf("%lf", &cel);
        temp = (cel * (0.555)) + 32;

        printf("Temperatura equivalente em Fahrenheit: %lf", temp);
    }
        
        else 
        {
            printf("Essa nao e a escala certa.");
        }
    }
    

   

