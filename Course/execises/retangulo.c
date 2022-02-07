#include <stdio.h>
#include <math.h>

int main ()

{
    float base, altura, area, perimetro, diagonal;
    
    printf("Digite a base do retangulo:");
    scanf("%f", &base);

    printf("Digite a altura do retangulo:");
    scanf("%f", &altura);

    area = base * altura;
    perimetro = (altura * 2) + (base * 2);
    diagonal = sqrt(pow(base, 2) + pow(altura, 2) ); 

    printf("A area do teu retangulo e essa aqui: %0.4f", area);
    printf("\nO perimetro do teu retangulo e esse aqui: %0.4f", perimetro);
    printf("\nA diagonal do teu retangulo e essa aqui: %0.4f", diagonal);

}
