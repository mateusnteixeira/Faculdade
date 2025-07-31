#include <stdio.h>
#include <stdlib.h>

int main()
{
    float N1,N2,N3,VOL;
    printf("Digite o comprimento da caixa\n");
    scanf("%f",&N1);
    printf("Digite a largura da caixa\n");
    scanf("%f",&N2);
    printf("Digite a altura da caixa\n");
    scanf("%f",&N3);
    VOL= N1*N2*N3;
    printf("O volume da caixa e de:\n = %fL\n",VOL);
    system("pause");
}
