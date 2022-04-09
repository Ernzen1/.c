#include <stdio.h>

int main ()
{
    double grade1, grade2, average, mid;
    mid = 0;
    printf("Digite a primeira nota:");
    
    while (1)
    {
       
        scanf("%lf", &grade1);

        if (grade1 < 0 || grade1 > 10)
        {
            printf("Valor invalido! Tente novamente:");
            mid -= grade1;
            continue;
        }
        
        printf("Digite a segunda nota:");
        scanf("%lf", &grade2);

         if (grade2 < 0 || grade2 > 10)
        {
            printf("Valor invalido! Tente novamente:");
            mid -= grade2;
            continue;
        }

        average = grade1 + grade2 / 2;
        printf("Media = ", average);


    }
    
}