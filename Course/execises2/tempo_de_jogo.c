#include <stdio.h>

int main()
{
    int horai, horaf, hora1, hora2;

    printf("Hora inicial:");
    scanf("%d", &horai);

    printf("Hora final:");
    scanf("%d", &horaf);

    if (horai > horaf)
    {
        hora2 = (24 - horai) + horaf;
       

        printf("O jogo durou %d hora(s)", hora2);
    }
    
    else if (horai < horaf)
    {
        hora2 = horaf - horai;
        printf("O jogo durou %d hora(s)", hora2);
    }
    
    else if (horai == horaf)
    {
        printf("O jogo durou 24 hora(s)");

    }
    
}