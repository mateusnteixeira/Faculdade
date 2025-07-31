#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X,Y,Z;
    printf("Escreva 3 valores\n");
    scanf("%d %d %d",&X,&Y,&Z);
    if((X<Y)&(X<Z))
    {
        printf("O menor valor e %d\n",X);
    } else if((X<Y)&(X>Z))
    {
       printf("%d e o menor valor dentre os 3\n",Z);
    } else{printf("%d e o menor valor\n",Y);
        }
    system("pause\n");
    return 0;
}
