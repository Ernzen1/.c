#include <stdio.h>

int main()
{
    float preco, dinheiro,troco, precototal;
    int quantidade;
    
    printf("Digite o preco do produto:");
    scanf("%f", &preco);
    printf("Insira a quantidade de produtos:");
    scanf("%d", &quantidade);
    

    precototal = preco * quantidade;

    printf("\nDinheiro recebido:");
    scanf("%f", &dinheiro);

    troco = dinheiro - precototal;

    printf(
        "TROCO = %0.2f", troco
    );


}