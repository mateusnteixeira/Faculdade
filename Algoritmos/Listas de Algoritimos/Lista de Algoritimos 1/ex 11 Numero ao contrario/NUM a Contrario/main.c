#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   int NUM,CENT,NUMINV,DEZ,UNI;
        printf("Digite uma centena qualquer\n");
        scanf("%d",&NUM);
        CENT=NUM/100;
        DEZ=(NUM %100)/10;
        UNI=NUM %10;
        NUMINV=((UNI*100)+(DEZ*10)+CENT);
        printf("O Numero ao contrario fica \n\t %d \n",NUMINV);
        system("pause");
    return 0;
}
