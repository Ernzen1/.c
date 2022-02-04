#include <stdio.h>


int main()
{
 
 
 int idade;
 float salario1, salario2, salario_total, jumento;
 char nome[15];
 

 printf("Qual teu nome porra:");
 scanf("%s", &nome);
 printf("Digita ai  tua idade:");
 scanf("%d", &idade);
 printf("Quanto que tu ganhou no mes passado? :");
 scanf("%3f", &salario1);
 printf("E no outro porra? :");
scanf("%3f", &salario2);
 
salario_total = salario1 + salario2;
jumento = salario_total / 900;
printf("tu ja ganhou uma grana do caralho seu filho da puta ,%4f isso da pra comprar %1f jumentos, na tua idade de %d, eu so conseguia comprar 0.0009 jumentos, tu e pika %s", salario_total, jumento, idade, nome);





}