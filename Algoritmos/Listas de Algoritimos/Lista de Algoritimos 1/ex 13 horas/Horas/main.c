#include <stdio.h>
#include <stdlib.h>

int main()
{
    int TOT,HORA,MIN,SEG,REST;
     printf("Digite um numero de segundos\n");
        scanf("%d",&TOT);
        HORA=TOT/3600;
        REST=TOT%3600;
        MIN=REST/60;
        SEG=REST%60;
        printf("Total de segundos foi de %.0d horas %0.d minutos e %0.d segundos\n",HORA,MIN,SEG);
        system("pause");

    return 0;
}
