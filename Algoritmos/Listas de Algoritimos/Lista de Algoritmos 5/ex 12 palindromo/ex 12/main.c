#include <stdio.h>
#include <stdlib.h>

int main() {
    int SER, ALUN3 = 0, NGOSTA = 0, MAIOR = 0, NALUNOS = 0, MAXALUNOS = 100;
    float PORCENT;

    // Loop para ler os dados de cada aluno
    while (NALUNOS < MAXALUNOS) {
        printf("Digite a sua serie:\n |1-Primeira serie|\n|2-Segunda serie|\n|3-Terceira serie|\n|4-Quarta serie|\n|Ou 0 para sair|\n");
        scanf("%d", &SER);

        if (SER == 0) {
            break;
        }

        if (SER == 3) {
            ALUN3++;
        }

        switch (SER) {
            case 1:
                CONTRED = primeira_serie();
                break;

            case 2:
                CONTRED = segunda_serie();
                break;

            case 3:
                NGOSTA = terceira_serie(NGOSTA);
                break;

            case 4:
                MAIOR = quarta_serie(MAIOR);
                break;
        }

        NALUNOS++;

        // Calcula a porcentagem de alunos na terceira série que não gostam de redação
        if (SER == 3 && NGOSTA > 0) {
            PORCENT = ((float)NGOSTA / ALUN3) * 100;
        }
    }

    // Imprime os resultados após a leitura de todos os alunos
    printf("A quantidade de alunos que esta na terceira serie: %d\n", ALUN3);
    printf("A maior quantidade de livros lidos por um aluno que esta na quarta serie: %d\n", MAIOR);
    printf("A porcentagem de alunos que nao gostam de fazer redaçao e que estao na terceira série: %.2f\n", PORCENT);

    return 0;
}

int primeira_serie() {
    int LIV, RED;
    printf("Digite quantos livros voce le por mes:\n");
    scanf("%d", &LIV);
    printf("Voce gosta de fazer redaçoes?\n|1-Para sim|\n|2-Para nao|\n");
    scanf("%d", &RED);
    if (RED == 1) {
        CONTRED++; // Incrementa CONTRED somente na função main
    }
    printf("Obrigado pela ajuda :)\n");
    return CONTRED;
}

int segunda_serie() {
    int LIV, RED;
    printf("Digite quantos livros voce le por mes:\n");
    scanf("%d", &LIV);
    printf("Voce gosta de fazer redaçoes?\n|1-Para sim|\n|2-Para nao|\n");
    scanf("%d", &RED);
    if (RED == 1) {
        CONTRED++; // Incrementa CONTRED somente na função main
    }
    printf("Obrigado pela ajuda :)\n");
    return CONTRED;
}

int terceira_serie(int NGOSTA) {
    int LIV, RED;
    printf("Digite quantos livros voce le por mes:\n");
    scanf("%d", &LIV);
    printf("Voce gosta de fazer redaçoes?\n|1-Para sim|\n|2-Para nao|\n");
    scanf("%d", &RED);
    if (RED == 1) {
        CONTRED++; // Incrementa CONTRED somente na função main
    } else {
        NGOSTA++;
    }
    printf("Obrigado pela ajuda :)\n");
    return NGOSTA;
}

int quarta_serie(int MAIOR) {
    int LIV, RED;
    printf("Digite quantos livros voce le por mes:\n");
    scanf("%d", &LIV);
    if (LIV > MAIOR) {
        MAIOR = LIV;
    }
    printf("Voce gosta de fazer redaçoes?\n|1-Para sim|\n|2-Para nao|\n");
    scanf("%d", &RED);
    if (RED == 1) {
        CONTRED++; // Incrementa CONTRED somente na função main
    }
    printf("Obrigado pela ajuda :)\n");
    return MAIOR;
}