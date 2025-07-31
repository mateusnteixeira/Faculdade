#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float NUM;

//fzr um codigo para ler qualquer numero ate 999.999 e escrever por extenso esse mesmo numero//
void escrever_centavos(int centavos) {
    int dezena = centavos / 10;
    int unidade = centavos % 10;

    if (dezena == 0) {
        switch (unidade) {
            case 0:
                printf(""); // Nenhum centavo
                break;
            case 1:
                printf("Um centavo");
                break;
            case 2:
                printf("Dois centavos");
                break;
            case 3:
                printf("Três centavos");
                break;
            case 4:
                printf("Quatro centavos");
                break;
            case 5:
                printf("Cinco centavos");
                break;
            case 6:
                printf("Seis centavos");
                break;
            case 7:
                printf("Sete centavos");
                break;
            case 8:
                printf("Oito centavos");
                break;
            case 9:
                printf("Nove centavos");
                break;
        }
    } else if (dezena == 1) {
        switch (unidade) {
            case 0:
                printf("Dez centavos");
                break;
            case 1:
                printf("Onze centavos");
                break;
            case 2:
                printf("Doze centavos");
                break;
            case 3:
                printf("Treze centavos");
                break;
            case 4:
                printf("Quatorze centavos");
                break;
            case 5:
                printf("Quinze centavos");
                break;
            case 6:
                printf("Dezesseis centavos");
                break;
            case 7:
                printf("Dezessete centavos");
                break;
            case 8:
                printf("Dezoito centavos");
                break;
            case 9:
                printf("Dezenove centavos");
                break;
        }
    } else if (dezena >= 2) {
        switch (dezena) {
            case 2:
                printf("Vinte ");
                break;
            case 3:
                printf("Trinta ");
                break;
            case 4:
                printf("Quarenta ");
                break;
            case 5:
                printf("Cinquenta ");
                break;
            case 6:
                printf("Sessenta ");
                break;
            case 7:
                printf("Setenta ");
                break;
            case 8:
                printf("Oitenta ");
                break;
            case 9:
                printf("Noventa ");
                break;
        }

        // Unidade após a dezena, como "Vinte e um centavo"
        switch (unidade) {
            case 1:
                printf("e um centavo");
                break;
            case 2:
                printf("e dois centavos");
                break;
            case 3:
                printf("e três centavos");
                break;
            case 4:
                printf("e quatro centavos");
                break;
            case 5:
                printf("e cinco centavos");
                break;
            case 6:
                printf("e seis centavos");
                break;
            case 7:
                printf("e sete centavos");
                break;
            case 8:
                printf("e oito centavos");
                break;
            case 9:
                printf("e nove centavos");
                break;
        }
    }
}
int escrever_numero(){
    int CENTM,DEZM,UNIM,CENT,DEZ,UNI;
    float CENTAVOS,CENTAVOSDEZ,CENTAVOSUNI;
    //teste para ver se o arquivo abre e salva//
    FILE *numeros;
    numeros=fopen("numeros.txt","a");
            if (numeros==NULL) {
            printf("Erro ao abrir o arquivo.\n");
            return 1;
            }
        printf("Digite o valor que deseja (o valor maximo lido e: 999999.99$)\n");
        scanf("%f",&NUM);
        if(NUM>=10000000||NUM<0){
            printf("Numero invalido!!\nTente com um valor valido\n");
            fclose(numeros);
        return 1;
        }
        fprintf(numeros,"%.2f\n",NUM);
        fclose(numeros);

//transforma o numero em partes//
    CENTM =(int)NUM/100000;
    DEZM  =(int)(NUM-CENTM*100000)/10000;
    UNIM  =(int)(NUM-CENTM*100000-DEZM*10000)/1000;
    CENT  =(int)(NUM-CENTM*100000-DEZM*10000-UNIM*1000)/100;
    DEZ   =(int)(NUM-CENTM*100000-DEZM*10000-UNIM*1000-CENT*100)/10;
    UNI   =(int)(NUM-CENTM*100000-DEZM*10000-UNIM*1000-CENT*100-DEZ*10);
    CENTAVOS    =(int)round((NUM -(int)NUM)*100);
    CENTAVOSDEZ =(int)CENTAVOS/10;
    CENTAVOSUNI =(int)CENTAVOS%10;
//escrever o numero na tela//
        switch(CENTM){
        case 0:
            printf(" ");
        break;
        case 1:
            if(DEZM!=0||UNIM!=0){
        printf("Cento e ");}
        else{
            printf("Cem mil ");
        }
        break;
        case 2:
            if(DEZM!=0||UNIM!=0){
        printf("Duzentos e ");}
        else{
            ("Duzentos mil ");
        }
        break;
        case 3:
            if(DEZM!=0||UNIM!=0){
        printf("Trezentos e ");}
        else{
            printf("Trezentos mil ");
        }
        break;
        case 4:
            if(DEZM!=0||UNIM!=0){
        printf("Quatrocentos e ");}
        else {
            printf("Quatrocentos mil ");
        }
        break;
        case 5:
            if(DEZM!=0||UNIM!=0){
        printf("Quinhentos e ");}
        else{
            printf("Quinhentos mil ");
        }
        break;
        case 6:
            if(DEZM!=0||UNIM!=0){
        printf("Seiscentos e ");}
        else{
            printf("Seiscentos mil ");
        }
        break;
        case 7:if(DEZM!=0||UNIM!=0){
        printf("Setecentos e ");}
        else{
            printf("Setecentos mil ");
        }
        break;
        case 8:
            if(DEZM!=0||UNIM!=0){
        printf("Oitocentos e ");}
        else{
            printf("Oitocentos mil ");
        }
        break;
        case 9:
            if(DEZM!=0||UNIM!=0){
        printf("Novecentos e ");}
        else{
            printf("Novecentos mil ");
        }
        break;
        }
        switch(DEZM){
        case 0:
            printf(" ");
        break;
        case 1:
        switch(UNIM){
            case 0:
            printf("Dez mil "); break;
            case 1:
            printf("Onze mil ");break;
            case 2:
            printf("Doze mil ");break;
            case 3:
            printf("Treze mil ");break;
            case 4:
            printf("Quatorze mil ");break;
            case 5:
            printf("Quinze mil ");break;
            case 6:
            printf("Dezesseis mil ");break;
            case 7:
            printf("Dezessete mil ");break;
            case 8:
            printf("Dezoito mil ");break;
            case 9:
            printf("Dezenove mil ");break;
            }
        break;
        case 2:
            if(UNIM!=0){
        printf("Vinte e ");
        }else{
         printf("Vinte mil ");
        }
        break;
        case 3:
            if(UNIM!=0){
        printf("Trinta e ");}
        else{
            printf("Trinta mil ");
        }
        break;
        case 4:
            if(UNIM!=0){
        printf("Quarenta e ");}
        else {
            printf("Quarent mil ");
        }
        break;
        case 5:
            if(UNIM!=0){
        printf("Cinquenta e ");}
        else{
            printf("Cinquenta mil ");
        }
        break;
        case 6:
            if(UNIM!=0){
        printf("Sessenta e ");}
        else{
            printf("Sessenta mil ");
        }
        break;
        case 7:
            if(UNIM!=0){
        printf("Setenta e ");}
        else{
            printf("Setenta mil ");
        }
        break;
        case 8:
            if(UNIM!=0){
        printf("Oitenta e ");}
        else{
            printf("Oitenta mil ");
        }
        break;
        case 9:
            if(UNIM!=0){
        printf("Noventa e ");}
        else{
            printf("Noventa mil ");
        }
        break;
        }
        switch(UNIM){
            case 0:
                printf(" ");
            break;
            case 1:
                if(CENTM!=0||DEZM!=0){
            printf("Um mil ");break;}
            else{
                printf("Mil ");break;
            }
            case 2:
            printf("Dois mil ");break;
            case 3:
            printf("Tres mil ");break;
            case 4:
            printf("Quatro mil ");break;
            case 5:
            printf("Cinco mil ");break;
            case 6:
            printf("Seis mil ");break;
            case 7:
            printf("Sete mil ");break;
            case 8:
            printf("Oito mil ");break;
            case 9:
            printf("Nove mil ");break;
            }
        switch(CENT){
            case 0:
                printf(" ");
            break;
            case 1:
                if(DEZ!=0||UNI!=0){
            printf("e Cento e ");break;}
            else{
                printf("e Cem reais");
            }break;
            case 2:
            if(DEZ!=0||UNI!=0){
            printf("e Duzentos e ");break;}
            else{
                printf("e Duzentos reais");
            }break;
            case 3:
            if(DEZ!=0||UNI!=0){
            printf("e Trezentos e ");break;}
            else{
                printf("e Trezentos reais");
            }break;
            case 4:
            if(DEZ!=0||UNI!=0){
            printf("e Quatrocentos e ");break;}
            else{
                printf("e Quatrocentos reais");
            }break;
            case 5:
            if(DEZ!=0||UNI!=0){
            printf("e Quinhentos e ");break;}
            else{
                printf("e Quinhentos reais");
            }break;
            case 6:
            if(DEZ!=0||UNI!=0){
            printf("e Seiscentos e ");break;}
            else{
                printf("e Seiscentos reais");
            }break;
            case 7:
            if(DEZ!=0||UNI!=0){
            printf("e Setecentos e ");break;}
            else{
                printf("e Setecentos reais");
            }break;
            case 8:
            if(DEZ!=0||UNI!=0){
            printf("e Oitocentos e ");break;}
            else{
                printf("e Oitocentos reais");
            }break;
            case 9:
            if(DEZ!=0||UNI!=0){
            printf("e Novecentos e ");break;}
            else{
                printf("e Novecentos reais");
            }break;
               }
               switch(DEZ){
        case 0:
            printf(" ");
        break;
        case 1:
        switch(UNI){
            case 0:
            printf("Dez reais"); break;
            case 1:
            printf("Onze reais");break;
            case 2:
            printf("Doze reais");break;
            case 3:
            printf("Treze reais");break;
            case 4:
            printf("Quatorze reais");break;
            case 5:
            printf("Quinze reais");break;
            case 6:
            printf("Dezesseis reais");break;
            case 7:
            printf("Dezessete reais");break;
            case 8:
            printf("Dezoito reais");break;
            case 9:
            printf("Dezenove reais");break;
            }
        break;
        case 2:
            if(UNI!=0){
        printf("Vinte e ");
        }else{
         printf("Vinte reais ");
        }
        break;
        case 3:
            if(UNI!=0){
        printf("Trinta e ");}
        else{
            printf("Trinta reais ");
        }
        break;
        case 4:
            if(UNI!=0){
        printf("Quarenta  ");}
        else {
            printf("Quarent reais ");
        }
        break;
        case 5:
            if(UNI!=0){
        printf("Cinquenta e ");}
        else{
            printf("Cinquenta reais ");
        }
        break;
        case 6:
            if(UNI!=0){
        printf("Sessenta e ");}
        else{
            printf("Sessenta reais ");
        }
        break;
        case 7:
            if(UNI!=0){
        printf("Setenta e ");}
        else{
            printf("Setenta reais ");
        }
        break;
        case 8:
            if(UNI!=0){
        printf("Oitenta e ");}
        else{
            printf("Oitenta reais ");
        }
        break;
        case 9:
            if(UNI!=0){
        printf("Noventa e ");}
        else{
            printf("Noventa reais ");
        }
        break;
        }
       switch(UNI){
            case 0:
                printf(" ");
            break;
            case 1:
            printf("Um real ");break;
            case 2:
            printf("Dois reais ");break;
            case 3:
            printf("Tres reais ");break;
            case 4:
            printf("Quatro reais ");break;
            case 5:
            printf("Cinco reais ");break;
            case 6:
            printf("Seis reais ");break;
            case 7:
            printf("Sete reais ");break;
            case 8:
            printf("Oito reais ");break;
            case 9:
            printf("Nove reais ");break;
            }
            if (CENTAVOS > 0) {
        printf("Centavos: ");
        escrever_centavos((int)CENTAVOS);
        printf("\n");
    }

    return 0;

}
int imprimir_numero(){
        FILE *numeros=fopen("numeros.txt","r");
         if (numeros == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
        }
        float numero;  // variavel para armazenar cada numero lido
        printf("Numeros armazenados:\n");
            while(fscanf(numeros,"%f",&numero)!= EOF){
            printf("%.2f\n", numero);
            }
            fclose(numeros);

        return 0;
        }

int main(){
    //primeiro fazer o menu, depois faco cada funcao e descubro como implemento a manipulacao de arquivo//
    int OPC;

    do{
    printf("\t  -----------------------MENU-----------------------\n\n");
    printf("\t ||1- Escrever um numero por extenso               ||\n");
    printf("\t ||2- Imprimir todos os numeros do arquivo na tela ||\n");
    printf("\t ||3- SAIR                                         ||\n");
    printf("\t  --------------------------------------------------\n\n\t");
    scanf("%d",&OPC);
    switch(OPC){
        case 1:
            escrever_numero(); break;
        case 2:
            imprimir_numero(); break;
        case 3:
            break;
        default:
            printf("Opcao unvalida, tente novamente");
            break;
    }
    }while(OPC!=3);
    return 0;
}
        //fazer a l�gica dos centavos e depois ver sobre a manipula��o de m�dulos//
