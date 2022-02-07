#include <stdio.h>

int main ()
{
    while (1)
    {
    
    double x, y;
    char Q1[100] = "Quadrante Q1";
    char Q2[100] = "Quadrante Q2";
    char Q3[100] = "Quadrante Q3";
    char Q4[100] = "Quadrante Q4";
    
    printf("Insira o valor de X:");
    scanf("%lf", &x);

    printf("Insira o valor de Y:");
    scanf("%lf", &y);

    if (x > 0 && y > 0 )
    {
        printf("%s\n", Q1);
    }
    
    else if (x < 0 && y > 0)
    {
        printf("%s\n", Q2);
    }
    
    else if (x < 0 && y < 0)
    {
        printf("%s\n", Q3);
    }

    else if (x > 0 && y < 0)
    {
        printf("%s\n", Q4);
    }
    
    else if (x == 0 && y == 0)
    {
        break;    
    }

    else if (x == 0)
    {
        break;  
    }
    
    else if (y == 0)
    {
        break;
    }

    }
    
}