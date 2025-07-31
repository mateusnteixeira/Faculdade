#include <stdio.h>
#include <stdlib.h>

int main()
{
    int NUM,DIV,CONT;
    DIV=1;
    CONT=0;
    printf("Digite um numero para verificar se ele e primo:\n");
    scanf("%d",&NUM);
    do{
        if(NUM%DIV==0)
            CONT++;
        DIV++;
    }while(DIV<=NUM);
    if(CONT==2){
        printf("--Esse numero e primo--");
    }else{
    printf("--Esse numero nao e primo--");
    }
    return 0;
}
