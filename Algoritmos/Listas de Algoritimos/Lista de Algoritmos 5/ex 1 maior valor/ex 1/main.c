#include <stdio.h>
#include <stdlib.h>

int main()
{
    int NUM, MAIOR,CONT;
        MAIOR=0;
        CONT=0;
        while(CONT<=8){
            printf("Digite um numero qualquer:\n");
            scanf("%d",&NUM);
            if (NUM>MAIOR)
            {
                 MAIOR=NUM;
            }
            CONT++;

        }
        printf("O maior numero dentre os digitados e:%d",MAIOR);
         return 0;
}
