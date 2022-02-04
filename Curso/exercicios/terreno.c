#include <stdio.h>

int main() 
{
    float largura, comprimento, area, valor, preco;
    
    printf("Digite a largura do terreno:");

    scanf("%2f", &largura);

    printf("Digite o comprimento do terreno:");

    scanf("%2f", &comprimento);

    printf("Digite o valor do metro quadrado:");

    scanf("%2f", &valor);

    area = comprimento * largura;
    
    printf("A area do terreno e: %0.2f", area);

    preco = area * valor; 

    printf("\nO preco do terreno  e: %0.2f", preco);

}