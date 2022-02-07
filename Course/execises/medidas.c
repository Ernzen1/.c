#include <stdio.h>
#include <math.h>

int main() {

    double medidaa, medidab, medidac, quadrado, triangulo, trapezio;

    printf("Digite a medida A:");
    scanf("%lf", &medidaa);

    printf("Digite a medida B:");
    scanf("%lf", &medidab);

    printf("Digite a medida C:");
    scanf("%lf", &medidac);

    quadrado = pow(medidaa, 2);
    triangulo = (medidaa * medidab) / 2;
    trapezio = ((medidaa + medidab) * medidac) / 2;

    printf("AREA DO QUADRADO = %0.4lf", quadrado);
    printf("\nAREA DO TRAINGULO = %0.4lf", triangulo);
    printf("\n AREA DO TRAPEZIO = %0.4lf", trapezio);
   
}