#include <stdio.h>
#include <stdlib.h>

int main()
{
    float F,C;
    printf("Digite a temperatura em farenheits:\n");
    scanf("%f",&F);
    C=(F-32)/1,8;
    printf("A temperatura em graus Celsius e: %.2f celsius \n\n",C);
    system("pause");
    return 0;
}
