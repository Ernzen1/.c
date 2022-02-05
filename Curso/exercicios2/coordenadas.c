#include <stdio.h>

int main()
{
    double x, y;
    char Q1[10] = "Q1";
    char Q2[10] = "Q2";
    char Q3[10] = "Q3";
    char Q4[10] = "Q4";
    
    printf("Insira o valor de X:");
    scanf("%lf", &x);

    printf("Insira o valor de Y:");
    scanf("%lf", &y);

    if (x > 0 && y > 0 )
    {
        printf("%s", Q1);
    }
    
    else if (x < 0 && y > 0)
    {
        printf("%s", Q2);
    }
    
    else if (x < 0 && y < 0)
    {
        printf("%s", Q3);
    }

    else if (x > 0 && y < 0)
    {
        printf("%s", Q4);
    }
    
    else if (x == 0 && y == 0)
    {
        printf("Origem");
    }

    else if (x == 0)
    {
        printf("Eixo Y");
    }
    
    else if (y == 0)
    {
        printf("Eixo X");
    }

}

