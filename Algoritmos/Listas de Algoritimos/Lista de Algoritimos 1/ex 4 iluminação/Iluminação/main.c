#include <stdio.h>
#include <stdlib.h>

int main()
{
    float N1,N2,AR,LUZ;
    printf("Digite o comprimento do comodo\n\t");
    scanf("%f",&N1);
    printf("Digite a largura do comodo\n\t");
    scanf("%f",&N2);
    AR= N1*N2;
    LUZ= AR*18;
    printf("Sua area total e: \n =%2f\n", AR);
    system("pause");
    printf("E a potencia nescessaria e de:\n %f W\n",LUZ);
    system("pause");
    return 0;

}
