#include <stdio.h>

int main(){
    int quant;
    double preco, dinheiro, faltam, troco;

    printf("Preco unitario do produto: ");
    scanf("%lf", &preco);

    printf("Quantidade comprada:");
    scanf("%d", &quant);

    printf("Dinheiro recebido:");
    scanf("%lf", &dinheiro);

    if (dinheiro < (preco * quant))
    {
        faltam = - (dinheiro - (preco * quant));
        printf("Dinheiro insuficiente faltam %.2lf Reais", faltam);

    }
    else {
        troco = dinheiro - (preco * quant);
        printf("Troco = %.2lf", troco);
    }
    

}