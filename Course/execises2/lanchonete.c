#include <stdio.h>

int main()
    {
        int codigo, quant;
        double preco;

        printf("Codigo do produto comprado:");
        scanf("%d", &codigo);

        printf("Quantidade comprada:");
        scanf("%d", &quant);
        
        switch (codigo)
        {
        case 1:
            preco = quant * 5;
            printf("Valor a pagar: %.2lf", preco);
            break;
        
        case 2: 
            preco = quant * 3.50;
            printf("Valor a pagar: %.2lf", preco);
            break;

        case 3:
            preco = quant * 4.80;
            printf("Valor a pagar: %.2lf", preco);
            break;

        case 4:
            preco = quant * 8.90;
            printf("Valor a pagar: %.2lf", preco);
            break;

        case 5:
            preco = quant * 7.32;
            printf("Valor a pagar: %.2lf", preco);
            break;

        default:
            printf("Codigo errado");
            break;
        }
}