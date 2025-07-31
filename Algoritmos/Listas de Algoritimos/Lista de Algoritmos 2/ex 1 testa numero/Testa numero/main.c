#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int NU1,NU2,NU3;
    printf("Digite 1 numero:\n");
    scanf("%d",&NU1);
    printf("Digite um numero:\n");
    scanf("%d",&NU2);
    printf("Digite um numero:\n");
    scanf("%d",&NU3);
    if(NU1>0)
        {
            NU1=sqrt(NU1);
            printf("A raiz quadrada e: %d\n\n",NU1);
        }
    if((NU2>10)&&(NU2<100))
        {
            printf("Numero esta entre 10 e 100, intervalo permitido\n\n");
        }else{
        printf("Numero 2 nao esta dentro do intervalo\n\n");
        }
    if(NU3>NU2)
    {
        printf("A diferenca entre o segundo e o terceiro numero e \n %d\n\n",NU3-NU2);

    }
    else{

        printf("O terceiro numero agora e: %d\n",NU3+1);
    }
    system("pause");
    return 0;
}
