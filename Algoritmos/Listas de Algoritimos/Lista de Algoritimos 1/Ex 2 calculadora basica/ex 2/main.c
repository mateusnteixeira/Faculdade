#include <stdio.h>
#include <stdlib.h>

int main()
{
    float N1,N2,SOMA,MUL,DIV,SUB;
        printf("Digite um numero\n");
        scanf("%f",&N1);
        printf("Digite outro numero\n");
        scanf("%f", &N2);
        SOMA= N1+N2;
        MUL=N1*N2;
        DIV= N1/N2;
        SUB= N1-N2;
        printf("A soma foi\n =%f\n",SOMA);
        system("pause");
        printf("A subtracao foi \n =%f\n",SUB);
        system("pause");
        printf("A divisao foi\n =%f\n",DIV);
        system("pause");
        printf("A multiplicacao foi\n =%f\n",MUL);
        system("pause");
        return 0;

}
