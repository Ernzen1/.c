#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    float medidaa, medidab, medidac, quadrado, triangulo, trapezio;

    printf("Digite a medida A:");
    scanf("%f", &medidaa);

    printf("Digite a medida B:");
    scanf("%f", &medidab);

    printf("Digite a medida C:");
    scanf("%f", &medidac);

    quadrado = pow(medidaa, 2);

    triangulo = (medidaa * medidab) / 2;

    trapezio = ((medidaa + medidab) * medidac) / 2;

    printf("AREA DO QUADRADO = %0.4f", quadrado);
    printf("\nAREA DO TRAINGULO = %0.4f", triangulo);
    printf("\n AREA DO TRAPEZIO = %0.4f", trapezio);

    
}