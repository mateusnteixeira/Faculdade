#include <stdio.h>
#include <stdlib.h>

int main()
{
    int SALL,SALB,PROV;
    printf("Digite o salario bruto e os proventos\n");
    scanf("%d %d",&SALB,&PROV);
    if(SALB>50)
    {
      SALL= SALB+PROV-(SALB/10);
      printf("Seu salario liquido e de %.1d reais\n",SALL);
    }
    else if (SALB<51)
    {
        SALL=SALB+PROV-(SALB/20);
        printf("Seu salario liquido e de %.1d reais\n",SALL);
    }
    system("pause");
    return 0;
}
