#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;

    printf("Digite o primeiro lado: ");
    scanf("%d",&x);

    printf("Digite o segundo lado: ");
    scanf("%d",&y);

    printf("Digite o terceiro lado: ");
    scanf("%d",&z);


    if (x+y>z && x+z>y && y+z>x)
        {

        if (x == y && x == z)
        {
            printf("E um triangulo equilatero.\n");
        } else if (x == y || x == z || y == z)
        {
            printf("E um triangulo isosceles.\n");
        } else
        {
            printf("E um triangulo escaleno.\n");
        }
    } else {
        printf("Os lados informados nao formam um triangulo.\n");
    }
    system("pause\n");

    return 0;
}
