#include <stdio.h>
#include <stdlib.h>

int main()
{
    int NUM,intervalo1,intervalo2,foraintervalo;
    printf("Digite um valor qualquer (sendo um negativo para finalizar o processo):\n");
    while(1)
    {
        scanf("%d",&NUM);
        if(NUM<0){
            break;
        }
        if(NUM>=0&&NUM<=24){
            intervalo1++;
        }else if(NUM>=25&&NUM<=50){
        intervalo2++;
        }else {
            foraintervalo++;
        }
        }
        printf("--Resultados--\n");
        printf("|Total de numeros no intervalo 1 = %d  \n",intervalo1);
        printf("|Total de numeros no intervalo 2 = %d  \n",intervalo2);
        printf("|Total de numeros fora do intervalo = %d  \n",foraintervalo);
        return 0;
}
