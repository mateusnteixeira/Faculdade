#include <stdio.h>
#include <stdlib.h>

int main()
{
    float PESO,ALT,SEX;
        printf("Digite sua altura em metros\n");
        scanf("%f",&ALT);
        printf("Digite seu sexo, 1-Masculino | 2-Feminino\n");
        scanf("%f",&SEX);
        if(SEX=1)
        {
          PESO=(72.7*ALT)-58;
          printf("Seu peso ideal e: %.1f kilos\n",PESO);
        }
        else if(SEX=2)
        {
            PESO=(62.1*ALT)-44.7;
            printf("O seu peso ideal e: %.1f kilos\n",PESO);
        }
        else
            printf("Valor invalido\n");
        system("pause");
    return 0;

}
