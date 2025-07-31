#include <stdio.h>
#include <stdlib.h>

int CONTRED=0;
int main(){
    int SER,ALUN3=0,NGOSTA=0,MAIOR=0,NALUNOS,MAXALUNOS;
    NALUNOS=0;
    MAXALUNOS=100;
    while(NALUNOS<MAXALUNOS){
    float PORCENT;
    printf("Digite a sua serie:\n|1-Primeira serie|\n|2-Segunda serie|\n|3-Terceira serie|\n|4-Quarta serie|\n|Ou 0 para sair|\n");
    scanf("%d",&SER);
    if(SER==0){
        break;
    }
    if(SER==3){
        ALUN3++;
    }
    switch(SER){
    case 1:
        CONTRED=primeira_serie();
        break;

    case  2:
        CONTRED=segunda_serie();
        break;

    case 3:
        NGOSTA=terceira_serie(NGOSTA);
        break;

    case 4:
        MAIOR=quarta_serie(MAIOR);
        break;
    }
    NALUNOS++;
    if (SER == 3 && NGOSTA > 0)
        {
            PORCENT = ((float)NGOSTA / ALUN3) * 100;

    }

    printf("A quantidade de alunos que esta na terceira sarie: %d\n",ALUN3);
    printf("A maior quantidade de livros lidos por um aluno que esta na quarta serie: %d\n",MAIOR);
    printf("A porcentagem de alunos que nao gostam de fazer redacao e que estao na terceira serie: %.2f",PORCENT);
}}
    int primeira_serie(){
    int LIV,RED;
        printf("Digite quantos livros voce le por mes:\n");
        scanf("%d",&LIV);
        printf("Voce gosta de fazer redacoes?\n|1-Para sim|\n|2-Para nao|\n");
        scanf("%d",&RED);
            if(RED==1){
            CONTRED++;
            }
                printf("Obrigado pela ajuda :)\n");
                return CONTRED;}
    int segunda_serie(){
    int LIV,RED;
        printf("Digite quantos livros voce le por mes:\n");
        scanf("%d",&LIV);
        printf("Voce gosta de fazer redacoes?\n|1-Para sim|\n|2-Para nao|\n");
        scanf("%d",&RED);
            if(RED==1){
            CONTRED++;
            }
            printf("Obrigado pela ajuda :)\n");
            return CONTRED;}
    int terceira_serie(int NGOSTA){
    int LIV,RED;
        int PORCENT;
            printf("Digite quantos livros voce le por mes:\n");
            scanf("%d",&LIV);
            printf("Voce gosta de fazer redacoes?\n|1-Para sim|\n|2-Para nao|\n");
            scanf("%d",&RED);
                if(RED==1){
                CONTRED++;
                    }else{
                    NGOSTA++;
                    }
                    printf("Obrigado pela ajuda :)\n");
    return NGOSTA;}
    int quarta_serie(int MAIOR){
        int LIV,RED;
            printf("Digite quantos livros voce le por mes:\n");
            scanf("%d",&LIV);
                if(LIV<=MAIOR){
                MAIOR=LIV;
                }
                printf("Voce gosta de fazer redacoes?\n|1-Para sim|\n|2-Para nao|\n");
                scanf("%d",&RED);
                if(RED==1){
                CONTRED++;
                }
                printf("Obrigado pela ajuda :)\n");
                return MAIOR;
                }

