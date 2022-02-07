#include <stdio.h>

int main(){
    
    int primeiro, segundo, terceiro;

    printf("Digite o primeiro número?");
    scanf("%d", &primeiro );

    printf("Digite o segundo número?");
    scanf("%d", &segundo );

    printf("Digite o terceiro número?");
    scanf("%d", &terceiro );

    if (terceiro >= primeiro && segundo >= primeiro)
    {
        printf("O menor número é o %d", primeiro);
    }

    else if (terceiro >= segundo && primeiro >= segundo)
    {
       printf("O menor número é o %d", segundo);

    }
    
    else if (segundo >= terceiro && primeiro >= terceiro)
    {
        printf("O menor número é o %d", terceiro);

    }    
    



}