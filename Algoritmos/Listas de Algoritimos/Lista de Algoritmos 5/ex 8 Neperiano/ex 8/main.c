#include <stdio.h>
#include <stdlib.h>

int main() {
    int i,NUM=0,cont=0;
    double E=0;

    while(cont<=15){
    int fator=1,i=0;
            while(NUM<=fator){
            fator*=NUM;

            NUM++;
            }
            i*=fator;
        E+=1/i;
    cont++;
    }
    printf("--O resultado e: %f",E);
    return 0;
}
