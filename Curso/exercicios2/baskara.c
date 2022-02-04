#include <stdio.h>
#include <math.h>
int main(){

    double a = 0, b = 0, c = 0;
    double x1 = 0 , x2 = 0 , x12 = 0, x22 = 0;
    double delta = 0;
    printf("Digite o valor de a:");
    scanf("%lf", &a);

    printf("Digite o valor de b:");
    scanf("%lf", &b);

    printf("Digite o valor de c:");
    scanf("%lf", &c);

    delta = (b * b) - (4 * a * c);
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);
    if (delta < 0 ) {
    printf("Sua equacao nao tem raizes");
    }
      
    else {
    printf("X1 = %.4lf\n", x1);
    printf("X2 = %.4lf", x2);
    }
    }

  