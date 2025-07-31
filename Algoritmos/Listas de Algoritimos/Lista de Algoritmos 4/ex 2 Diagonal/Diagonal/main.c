#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int A,B,C,DIA;
    printf("Digite os valores dos lados de um paralelepipedo qualquer:   ");
    scanf("%d %d %d",&A, &B,&C);
    DIA=sqrt((A*A)+(B*B)+(C*C));
    printf("\nO valor da diagonal desse paralelepipedo e: %d\n",DIA);
    system("pause\n");
    return 0;
}
