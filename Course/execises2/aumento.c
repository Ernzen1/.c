#include <stdio.h>

int main ()
{
    double salario, nsalario;
    int aumento, porcentagem;


    printf("Digite o salario do colaborador:");
    scanf("%lf", &salario);

    
    if (salario < 1000)
    {
        aumento = salario * 0.20;
        nsalario = salario + aumento;
        printf("Novo salario = %.2lf\n", nsalario);
        printf("Aumento = %d%%", 20);
    }
    
    else if (salario < 3000)
    {
        aumento = salario * 0.15;
        nsalario = salario + aumento;
        printf("Novo salario = %.2lf\n", nsalario);
        printf("Aumento = %d%%", 15);
    }
    
       else if (salario <= 8000)
    {
        aumento = salario * 0.10;
        nsalario = salario + aumento;
        printf("Novo salario = %.2lf\n", nsalario);
        printf("Aumento = %d%%", 10);
    }

    else {
        aumento = salario * 0.05;
        nsalario = salario + aumento;
        printf("Novo salario = %.2lf\n", nsalario);
        printf("Aumento = %d%%", 5);
    }


}
