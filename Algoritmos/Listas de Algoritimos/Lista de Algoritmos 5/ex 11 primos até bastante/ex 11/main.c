#include <stdio.h>
#include <stdlib.h>

int main()
{
    int NUM,DIV,CONT;
    DIV=1;
    CONT=0;

    for(NUM=1;NUM<=100;NUM++){
        DIV=1;
        CONT=0;
        do{
        if(NUM%DIV==0){
            CONT++;}
        DIV++;
    }while(DIV<=NUM);
    if(CONT==2){
        printf("||  %d e primo  ||\n\n",NUM);
    }else{
    printf("||%d nao e primo||\n\n",NUM);
    }
    }
    return 0;
}
