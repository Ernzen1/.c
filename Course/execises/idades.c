#include <stdio.h>

int main(){
    int idade, idade2;
    char nome[100];
    char nome2[100];
    float media;

    
    printf("Insira o nome da primeira pessoa:");
    scanf("%s", &nome);
    
    printf("Digite a idade da primeira pessoa:");
    scanf("%d", &idade);
    
    printf("\nDigite o nome da segunda pessoa:");
    scanf("%s", &nome2);
    
    printf("Digite a idade da segunda pessoa:");
    scanf("%d", &idade2);
    
    media = (idade + idade2) / 2 ;

    printf("Dados da primeira pessoa: ");
    printf("\nNome: %s", nome);
    printf("\nIdade: %d", idade);
    printf("\nDados da segunda pessoa: ");
    printf("\nNome: %s", nome2);
    printf("\nIdade: %d", idade2);
    printf("\nA idade media de %s e %s e %0.2f", nome, nome2, media);

}
