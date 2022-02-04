#include <stdio.h>

int main ()
{
     double dist1, dist2, dist3, maiord;

     printf("Digite as tres distancias:");
     scanf("%lf", &dist1);
     scanf("%lf", &dist2);
     scanf("%lf", &dist3);
     if (dist1 > dist2 && dist1 > dist3)
     {
         printf("Maior distancia: %.2lf", dist1);

     }
     
     else if (dist2 > dist3)
     {
        printf("Maior distancia: %.2lf", dist2);

     }
     
     else {
        printf("Maior distancia: %.2lf", dist3);

     }
}