#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
   int TOT,ANO,MES,DIA,REST;
        printf("Digite sua idade em dias\n");
        scanf("%d",&TOT);
        ANO=TOT/365;
        REST=TOT%365;
        MES=REST/30;
        DIA=REST%30;
        printf("Sua idade e %.0d anos %0.d meses e %0.d dias\n",ANO,MES,DIA);
        system("pause");

    return 0;
}
