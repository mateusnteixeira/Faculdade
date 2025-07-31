#include<stdio.h>

int main()
{
	int PRI, SEG, TER, QUANT, CONT, SOMA;
    CONT = 2;
    SOMA = 0;
	PRI = 1;
    printf("Informe a quantidade de termos da serie\n");
    scanf("%d", &QUANT);
    printf("%d\t", PRI);
    SEG = 1;
    SOMA = SOMA + PRI + SEG;
    printf("%d\t", SEG);

    while (CONT  < QUANT)
    {
        TER = PRI + SEG;
        printf("%d\t", TER);
        PRI = SEG;
        SEG = TER;
        SOMA = SOMA + TER;
        CONT++;
    }
    printf("\nA soma de todos os termos foi %d\n\n", SOMA);
    return 0;
}
