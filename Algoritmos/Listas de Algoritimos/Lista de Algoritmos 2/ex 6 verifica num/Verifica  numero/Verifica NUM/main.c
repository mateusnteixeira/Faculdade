#include <stdio.h>
#include <stdlib.h>

int main()
{
    int NUM;
    printf("Digite um numero qualquer\n");
    scanf("%d",&NUM);
    if(NUM%2==0)
    {
        printf("%d e PAR\n",NUM);
    }   else
    {
        printf("%d e IMPAR\n",NUM);
    }
    if(NUM>=0)
    {
        printf("O numero e POSITIVO\n");
    }   else {
            printf("O numero e NEGATIVO\n");
    }
        system("pause\n");
    return 0;
}
