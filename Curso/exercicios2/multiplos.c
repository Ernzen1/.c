#include <stdio.h>

int main ()
{
    int num1, num2;

    printf("Digite os numeros:");
    scanf("%d\n", &num1);
    scanf("%d", &num2);

    if ((num1 % num2 == 0) || (num2 % num1 == 0))
    {
        printf("Os numeros sao multiplos");

    }
    else 
    printf("Os numeros nao sao multiplos");



}