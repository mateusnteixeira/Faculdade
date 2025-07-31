#include <stdio.h>
#include <stdlib.h>

int main()
{
    int VA,VB;
    printf("Digite 2 numeros interos\n");
    scanf("%d %d",&VA,&VB);
    VA=VA+VB;
    VB=VA-VB;
    VA=VA-VB;
    printf("o Primeiro numero se torna %d\n",VA);
    printf("O Segundo numero se torna %d\n",VB);
    system("pause");
    return 0;
}
