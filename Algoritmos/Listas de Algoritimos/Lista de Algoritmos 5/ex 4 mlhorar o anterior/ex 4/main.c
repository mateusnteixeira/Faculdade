#include <stdio.h>
#include <stdlib.h>

int main()
{
    int NUM,intervalo1,intervalo2,foraintervalo,MED1,MED2,SOMA1,SOMA2,NUM1,NUM2;
    printf("Digite um valor qualquer (sendo um negativo para finalizar o processo):\n");
    intervalo1=0;
    intervalo2=0;
    foraintervalo=0;
    while(1)
    {
        scanf("%d",&NUM);
        if(NUM<0){
            break;
        }
        if(NUM>=0&&NUM<=24){
            intervalo1++;
            NUM1=NUM;
            SOMA1+=NUM1;

        }else if(NUM>=25&&NUM<=50){
        intervalo2++;
        NUM2=NUM;
        SOMA2+=NUM2;
        }else {
            foraintervalo++;
        }
        }
        MED1=SOMA1/intervalo1;
        MED2=SOMA2/intervalo2;
        printf("--Resultados--\n");
        printf("|Total de numeros no intervalo 1 = %d  \n",intervalo1);
        printf("|Total de numeros no intervalo 2 = %d  \n",intervalo2);
        printf("|Total de numeros fora do intervalo = %d  \n\n",foraintervalo);
        printf("|A media aritimetica do intervalo 1 foi = %d  \n",MED1);
        printf("|A media aritimetica do intervalo 2 foi = %d  \n",MED2);
        return 0;
}
