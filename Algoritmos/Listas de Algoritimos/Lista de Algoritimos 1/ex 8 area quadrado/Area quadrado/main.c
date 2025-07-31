#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    float LADO,AREA;
    printf("Digite o valor do lado do quadrado\n");
    scanf("%f",&LADO);
    AREA= pow(LADO,2);
    printf("A area do quadrado e:\n %f",AREA);
    return 0;
}
