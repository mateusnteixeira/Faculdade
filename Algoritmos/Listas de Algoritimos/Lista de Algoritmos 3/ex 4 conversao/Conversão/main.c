#include <stdio.h>
#include <stdlib.h>

int main()
{

    float COT;
    int OPC;
    printf("Digite a cotacao de dolar para real\n");
    scanf("%f",&COT);
    printf("Escolha o que quer converter\n");
    printf("1-Dolar para real\n");
    printf("2-Real para dolar\n");
    scanf("%d",&OPC);
    switch(OPC){
      case 1:
      dolar();
      break;
      case 2:
      real();
      break;
      default:
      printf("Digite um numero valido\n");
    }
    system("pause\n");
    return 0;
}

void dolar(float COT){
    float DOL,REAL;
    printf("Digite quantos dolares voce quer converter\n");
    scanf("%f",&DOL);
    REAL=DOL * COT;
    printf("Tem um total de %.2f reais\n",REAL);
}
void real(float COT){
    float DOL,REAL;
    printf("Digite quantos reais voce quer converter\n");
    scanf(" %f", &REAL );
    DOL= REAL / COT;
    printf("Tem um total de %.2f dolares\n",DOL);
}
