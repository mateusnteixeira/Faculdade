#include <stdio.h>
#include <stdlib.h>

int main()
{
    int S,NUMS,DIV;
    NUMS=1;
    DIV=1;
    while(NUMS<=99){
        S+=NUMS/DIV;
        NUMS+=2;
        DIV+=1;
    }
    printf("S equivale a: %1.d",S);
    return 0;
}
