#include <stdio.h>
#include <stdlib.h>
void ave(){
    int OPC2, OPC3;
    printf("Digite 1- ela nao voa \n2-se ela nada\n");
    scanf("%d",&OPC2);
    switch(OPC2){
case 1:
    printf("Digite 1-tropical \n2-artica\n");
    scanf("%d",&OPC3);
    if(OPC3==1){
        printf("E um avestruz\n");
        }else
            printf("E um pinguim\n");
            break;
case 2:
    printf("E um pato\n");
    break;
default:
    printf("Escolha um animal da lista passada anteriormente\n");
break;
    } }
    void mamifero(){
    int OPC2, OPC3;
    printf("Digite 1-quadripede \n2-bipede\n");
    scanf("%d",&OPC2);
    switch (OPC2){
case 1:
    printf("Digite 1-carnivoro \n2-Herbivoro\n");
    scanf("%d",&OPC3);
    if(OPC3==1){
        printf("E um leao\n");
    }else
        printf("E um cavalo\n");

case 2:
    printf("Digite 1-Frutifero \n2-Ornivoro\n");
    scanf("%d",&OPC3);
    if(OPC3==1){
        printf("E um macaco\n");
        }else
            printf("E um humano\n");
    }

    }
int main()
{
    int OPC;
    printf(" O animal e uma \n1-Ave\n ou um \n2-Mamifero\n");
    scanf("%d",&OPC);
    switch(OPC){
    case 1:
    ave();
    break;
    case 2:
    mamifero();
    break;
    default:
        printf("Valor invalido\n");
        break;
    }

    return 0;
}
