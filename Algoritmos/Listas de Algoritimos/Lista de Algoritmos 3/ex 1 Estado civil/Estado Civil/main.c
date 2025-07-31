#include <stdio.h>
#include <stdlib.h>
int main() {
    int OPC;

        printf("Digite um numero segundo seu estado civil:\n");
        printf("1-Solteiro\n");
        printf("2-Casado\n");
        printf("3-Viuvo(a)\n");
        printf("4-Divorciado\n");
        scanf(" %d",&OPC);
        switch(OPC){
            case 1:
            printf("Solteiro, um individuo que nao e casado,viuvo nem divrciado\n");
            break;
            case 2:
            printf("Casado, um individui que esta legalmente unido a uma pessoa em matrimonio\n");
            break;
            case 3:
            printf("Viuvo, um individuo qual o conjuge faleceu e nao casou novamente\n");
                break;
            case 4:
            printf("Divorciado, um individuo qual teve o casamento dissolvido por um processo judicial\n");
            break;
    }
    system("pause\n");
}
