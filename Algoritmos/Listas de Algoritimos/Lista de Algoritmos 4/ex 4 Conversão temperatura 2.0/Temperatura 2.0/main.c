#include <stdio.h>
#include <stdlib.h>

 void Fahrenheit(){
 float F,C;
    printf("Digite a temperatura em farenheits:\n");
    scanf("%f",&F);
    C=(F-32)/1.8;
    printf("A temperatura em graus Celsius e: %.2f celsius \n",C);
    system("pause");
    return 0;
 }
 void Celcius(){
     float F,C;
     printf("Digite a temperatura em Celsius:\n");
     scanf("%f",&C);
  F = (C*9/5) + 32;
  printf("A temperatura em Farenheits e: %.2f F\n",F);
  system("pause");
  }
int main()
{
    int OPC;
    printf("Digite o que o numero correspondente a temperatura desejada\n");
    printf("1-Fahrenheit para Celcius\n");
    printf("2-Celcius para Fahrenheit\n ");
    scanf("%d", &OPC);
    switch(OPC){
case 1:
    Fahrenheit();
    break;
case 2:
    Celcius();
    break;
default:
    printf("Numero invalido");
    break;
    return 0;
    }
    return 0;
}
