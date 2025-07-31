#include <stdio.h>
#include <stdlib.h>

int main() {
    int mes, dia, ano;

    printf("Digite um numero que represente o mes (1-12): ");
    scanf("%d", &mes);
    switch (mes) {
        case 1:
            printf("Janeiro\n");
            break;
        case 2:
            printf("Fevereiro\n");
            break;
        case 3:
            printf("Março\n");
            break;
        case 4:
            printf("Abril\n");
            break;
        case 5:
            printf("Maio\n");
            break;
        case 6:
            printf("Junho\n");
            break;
        case 7:
            printf("Julho\n");
            break;
        case 8:
            printf("Agosto\n");
            break;
        case 9:
            printf("Setembro\n");
            break;
        case 10:
            printf("Outubro\n");
            break;
        case 11:
            printf("Novembro\n");
            break;
        case 12:
            printf("Dezembro\n");
            break;
        default:
            printf("Mes invalido, escreva um numero entre 1 e 12\n");
            return 1;
    }

    if (mes >= 1 && mes <= 12) {
        printf("Digite o dia e o ano: ");
        scanf("%d %d", &dia, &ano);
        if (dia >= 1 &&
            (dia <= 31 || (mes == 2 && dia <= 28) || (mes == 4 || mes == 6 || mes == 9 || mes == 11 && dia <= 30)))
            {
            printf("A data informada e: %d de ", dia);
            switch (mes) {
                case 1:
                    printf("Janeiro");
                    break;
                case 2:
                    printf("Fevereiro");
                    break;
                case 3:
                    printf("Marco");
                    break;
                case 4:
                    printf("Abril");
                    break;
                case 5:
                    printf("Maio");
                    break;
                case 6:
                    printf("Junho");
                    break;
                case 7:
                    printf("Julho");
                    break;
                case 8:
                    printf("Agosto");
                    break;
                case 9:
                    printf("Setembro");
                    break;
                case 10:
                    printf("Outubro");
                    break;
                case 11:
                    printf("Novembro");
                    break;
                case 12:
                    printf("Dezembro");
                    break;
            }
            printf(" de %d\n", ano);
        } else {
            printf("Valor invalido para o mes selecionado\n");
        }
    }

    return 0;
}
