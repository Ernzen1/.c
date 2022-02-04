#include <stdio.h>

int main (){

char  Nome[100];
float valorh, pagamento;
int horas;

printf("Insira o nome do funcionário:");
scanf("%[A-Z a-z]", Nome);

printf("Insira o valor por hora:");
scanf("%d", &horas);

printf("Insira o valor pelas horas:");
scanf("%f", &valorh);

pagamento = horas * valorh;

printf(" O Pagamento de %s deve ser %0.2f", Nome,  pagamento);











}