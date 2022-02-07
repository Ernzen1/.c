#include <stdio.h>

int main()
{
    int senha;

    printf("Digite a senha:");
    scanf("%d", &senha);

    while (1)    
    {
     
        if (senha != 2002)
        {
            printf("Senha Invalida! Tente Novamente:");
            scanf("%d", &senha);
        }
        
        else if (senha == 2002)
         {
            printf("Acesso permitido!");
            break;
        }
    }
}