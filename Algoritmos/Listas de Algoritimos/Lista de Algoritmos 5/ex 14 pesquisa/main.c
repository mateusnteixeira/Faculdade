#include <stdio.h>
#include <stdlib.h>


int SIM=0,NAO=0,SIMF=0,NAOM=0,CONT=0,CONTM=0,CONTF=0,CONTT=0;

void HOMEM() {
    int OPC;
    CONTT++;
    CONTM++;
    printf("Voce gostou do produto\n1-Para SIM\n2-Para NAO\n");
    scanf("%d",&OPC);

    if (OPC==1){
        SIM++;
    } else if (OPC==2){
        NAO++;
        NAOM++;
    } else{
        printf("Opcao invalida\n");
    }
}
void MULHER(){
    int OPC;
    CONTT++;
    CONTF++;
    printf("Voce gostou do produto\n1-Para SIM\n2-Para NAO\n");
    scanf("%d",&OPC);

    if (OPC==1){
        SIM++;
        SIMF++;
    } else if (OPC==2){
        NAO++;
    } else{
        printf("Opcao invalida\n");
    }
}
int main() {
    int SEX, PORCF, PORCM;
    for (int i = 0; i < 10; i++) {
        printf("___________\n");
        printf(" SELECIONE \n");
        printf("1-HOMEM\n");
        printf("2-MULHER\n");
        printf("___________\n");
        scanf("%d", &SEX);
        switch (SEX) {
            case 1:
                HOMEM();
                break;
            case 2:
                MULHER();
                break;
            default:
                printf("Opcao Invalida\n");
                return 1;
        }
    }
    // Calculo das porcentagens
    if (CONTF>0){
        PORCF=(SIMF*100)/CONTF;
    } else {
        PORCF=0;
    }
    if (CONTM > 0) {
        PORCM = (NAOM*100)/CONTM;
    } else {
        PORCM = 0;
    }
    // Exibicao dos resultados
    printf("Numero de pessoas que fizeram a pesquisa: %d\n", CONTT);
    printf("Numero de pessoas que responderam SIM: %d\n", SIM);
    printf("Numero de pessoas que responderam NAO: %d\n", NAO);
    printf("Porcentagem de mulheres que responderam SIM: %d%%\n", PORCF);
    printf("Porcentagem de homens que responderam NAO: %d%%\n", PORCM);
    system("pause");
    return 0;
}
