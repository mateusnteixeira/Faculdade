#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main() {
    int NUMA,N1,N2,N3;
    float ME,MA;
    char conceito;

    printf("Digite o numero de identificacao do aluno: \n");
    scanf("%d", &NUMA);

    printf("Digite a primeira nota: \n");
    scanf("%d", &N1);

    printf("Digite a segunda nota: \n");
    scanf("%d", &N2);

    printf("Digite a terceira nota: \n ");
    scanf("%d", &N3);

    printf("Digite a media dos exercicios (ME): \n ");
    scanf("%f", &ME);

    MA = (N1 + N2 * 2 + N3 * 3 + ME) / 7;

    if (MA >= 9.0) {
        conceito = 'A';
    } else if (MA >= 7.5) {
        conceito = 'B';
    } else if (MA >= 6.0) {
        conceito = 'C';
    } else if (MA >= 4.0) {
        conceito = 'D';
    } else {
        conceito = 'E';
    }

    printf("\nNumero do aluno: %d\n", NUMA);
    printf("Nota 1: %d\n",N1);
    printf("Nota 2: %d\n",N2);
    printf("Nota 3: %d\n",N3);
    printf("Media dos exercicios: %.2f\n",ME);
    printf("Media de aproveitamento: %.2f\n",MA);
    printf("Conceito: %c\n", conceito);
    system("pause\n");

    if (conceito == 'A' || conceito == 'B' || conceito == 'C') {
        printf("APROVADO\n");
    } else {
        printf("REPROVADO\n");
    }
    system("pause\n");
    return 0;
}
