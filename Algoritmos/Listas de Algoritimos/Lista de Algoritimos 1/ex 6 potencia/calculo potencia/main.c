#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float N1,N2,RESP;
        printf("Digite um numero:\n");
        scanf("%f",&N1);
        printf("Digite um numero:\n");
        scanf("%f",&N2);
        RESP=pow(N1,N2);
        printf("O resultado da potencia entre eles e:\n %.0f\n",RESP);
        system("pause");
        return 0;
}
