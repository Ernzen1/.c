#include <stdio.h>
#include <math.h>

int main(){

    double a , b , c;
    double x1, x2;
    double delta;
    
    a = b = c = 0;
    x1 = x2 = 0;
    delta = 0;
    
    printf("Digite o valor de a:");
    scanf("%lf", &a);

    printf("Digite o valor de b:");
    scanf("%lf", &b);

    printf("Digite o valor de c:");
    scanf("%lf", &c);

    delta = (b * b) - (4 * a * c);

    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);

    if (delta < 0 ) 
    {
    printf("Sua equacao nao tem raizes");
    }
      
    else 
    {
    printf("X1 = %.4lf\n", x1);
    printf("X2 = %.4lf", x2);
    }
    }

  