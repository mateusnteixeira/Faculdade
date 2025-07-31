#include <stdio.h>
#include <stdlib.h>

int main()
{

    int NU,AUM,OPC;
    printf("Digite seu numero\n");
    scanf("%d",&NU);
        printf("Escolha o numero referente ao seu salario\n");
        printf("1. 0 a 1000,00 1\n");
        printf("2. 1000,01 a 1500,00 2\n");
        printf("3. 1500,01 a 1800,00 3\n");
        printf("4. 1800.01 a 2000,00 4\n");
        printf("5. 2000,01 a 2500,00 5\n");
        printf("6. Acima de 2500,00 6\n");
        printf("Digite sua escolha: ");
        scanf("%d",&OPC);
        switch(OPC){
        case 1:
            printf("%d, seu salario e de: %d\n Aumentara em 15% e sera de\n%d\n",NU,OPC,OPC+(OPC*0.15));
            break;
            case 2:
            printf("%d, seu salario e de: %d\n Aumentara em 12% e sera cerca de \n %d\n",NU,OPC,OPC+(OPC*0.12));
            break;
            case 3:
            printf("%d, seu salario e de: %d\n Aumentara em 10% e sera cerca de\n %d\n",NU,OPC,OPC+(OPC*0.10));
            break;
            case 4:
            printf("%d, seu salario e de: %d\n Aumentara em 7% e sera cerca de\n %d\n",NU,OPC,OPC+(OPC*0.07));
            break;
            case 5:
            printf("%d, seu salario e de: %d\n Aumentara em 4% e sera cerca de\n %d\n",NU,OPC,OPC+(OPC*0.04));
            break;
            case 6:
            printf("%d, seu salario e de: %d\n E nao sofrera mudanca\n",NU,OPC);
            break;
        }
        system("pause\n");
    return 0;
}
