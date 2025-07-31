#include <stdio.h>
#include <stdlib.h>

int main()
{
    float N1,N2,AR;
    printf("Digite o valor da base do triangulo: \n");
    scanf("%f", &N1);
    printf("Digite a altura do triangulo\: \n");
    scanf("%f", &N2);
    AR= (N1*N2)/2;
    printf("A area do triangulo e \n\t=%f",AR);
    system("pause");
    return 0;
}
