#include <stdio.h>

int main ()
{
    int num1, num2;

    

    while (1)
    {
       printf("Digite dois números:");
       scanf("%d\n %d", &num1, &num2);
       
       if (num1 > num2)
       {
           printf("Descrente!\n");
       }
       
       else if (num2 > num1)
       {
           printf("Crescente!\n");
       }

        else {
            break;
        }
    }
    
}