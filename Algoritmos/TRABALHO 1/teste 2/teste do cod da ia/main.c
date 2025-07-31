#include <stdio.h>
#include <stdlib.h>

void imprimirPorExtenso(float valor) {
    // Fun��o simples para imprimir valor por extenso
    printf("Valor: %.2f\n", valor);
}

void salvarEmArquivo(float valor) {
    FILE *arquivo = fopen("valores.txt", "a");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return;
    }
    fprintf(arquivo, "%.2f\n", valor);
    fclose(arquivo);
}

int main() {
    int opcao;
    float valor;

    do {
        printf("Menu:\n");
        printf("1. Ler um valor real\n");
        printf("2. Sair\n");
        printf("Escolha uma op��o: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("Digite um valor real: ");
                scanf("%f", &valor);
                imprimirPorExtenso(valor);
                salvarEmArquivo(valor);
                break;
            case 2:
                printf("Saindo...\n");
                break;
            default:
                printf("Op��o inv�lida! Tente novamente.\n");
        }
    } while (opcao != 2);

    return 0;
}
