#include <stdio.h>
#include <stdlib.h>

int main()
{
    int NUM;
    NUM=1000;
    while(NUM<=1999){
        if(NUM%11==5){
            printf("|  O numero %d e divisivel por 11 e tem resto 5  |\n",NUM);
            NUM++;
        }else
        NUM++;
    }
    system("pause");
    return 0;
}
