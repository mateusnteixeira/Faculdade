#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//fzr um codigo para ler qualquer numero ate 999.999 e escrever por extenso esse mesmo numero//
int escrever_numero(float NUM){
    int CENTM,DEZM,UNIM,CENT,DEZ,UNI;
    float CENTAVOS,CENTAVOSDEZ,CENTAVOSUNI;
        printf("Digite o valor que deseja (o valor maximo lido e: 999.999,99$)\n");
        scanf("%f",&NUM);
        if(NUM>=10000000||NUM<0){
            printf("Numero invalido!!\nTente com um valor valido\n");
        return 1;
        }
//transforma o numero em partes//
    CENTM =(int)NUM/100000;
    DEZM  =(int)(NUM-CENTM*100000)/10000;
    UNIM  =(int)(NUM-CENTM*100000-DEZM*10000)/1000;
    CENT  =(int)(NUM-CENTM*100000-DEZM*10000-UNIM*1000)/100;
    DEZ   =(int)(NUM-CENTM*100000-DEZM*10000-UNIM*1000-CENT*100)/10;
    UNI   =(int)(NUM-CENTM*100000-DEZM*10000-UNIM*1000-CENT*100-DEZ*10);
    CENTAVOS    =(int) round((NUM -(int)NUM)*100);
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
            if(NUM!=0){
        printf("Vinte e ");
        }else{
         printf("Vinte mil ");
        }
        break;
        case 3:
            if(NUM!=0){
        printf("Trinta e ");}
        else{
            printf("Trinta mil ");
        }
        break;
        case 4:
            if(NUM!=0){
        printf("Quarenta e ");}
        else {
            printf("Quarent mil ");
        }
        break;
        case 5:
            if(NUM!=0){
        printf("Cinquenta e ");}
        else{
            printf("Cinquenta mil ");
        }
        break;
        case 6:
            if(NUM!=0){
        printf("Sessenta e ");}
        else{
            printf("Sessenta mil ");
        }
        break;
        case 7:
            if(NUM!=0){
        printf("Setenta e ");}
        else{
            printf("Setenta mil ");
        }
        break;
        case 8:
            if(NUM!=0){
        printf("Oitenta e ");}
        else{
            printf("Oitenta mil ");
        }
        break;
        case 9:
            if(NUM!=0){
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
            }//para definir os centavos, ja que switch n da pra usar com float//
            if (CENTAVOSDEZ == 0) {
                if (CENTAVOSUNI == 0) {
                    printf(" \n");
                }else if (CENTAVOSUNI == 1) {
                printf(" e Um centavo\n");
                    } else {
                    printf(" e %d centavos\n", CENTAVOSUNI);
            }//definir os centavos caso a dez de centavos seja de 10-19//
        }else if (CENTAVOSDEZ == 1) {
            if (CENTAVOSUNI == 0) {
            printf(" e Dez centavos\n");
                }else if (CENTAVOSUNI == 1) {
                printf(" e Onze centavos\n");
                    }else if (CENTAVOSUNI == 2) {
                    printf(" e Doze centavos\n");
                        }else if (CENTAVOSUNI == 3) {
                        printf(" e Treze centavos\n");
                            }else if (CENTAVOSUNI == 4) {
                            printf(" e Quatorze centavos\n");
                                }else if (CENTAVOSUNI == 5) {
                                printf(" e Quinze centavos\n");
                                    }else if (CENTAVOSUNI == 6) {
                                    printf(" e Dezesseis centavos\n");
                                        }else if (CENTAVOSUNI == 7) {
                                        printf(" e Dezessete centavos\n");
                                            }else if (CENTAVOSUNI == 8) {
                                            printf(" e Dezoito centavos\n");
                                            }else if (CENTAVOSUNI == 9) {
                                            printf(" e Dezenove centavos\n");
                                            }
            }else if (CENTAVOSDEZ == 2) {
                if (CENTAVOSUNI == 0) {
                printf(" e Vinte centavos\n");
                    }else {
                    printf(" e Vinte e %d centavos\n", CENTAVOSUNI);
                            }//agora repetir o processo do else if ate fechar os 90 centavos//
            }else if (CENTAVOSDEZ == 3) {
                if (CENTAVOSUNI == 0) {
                printf(" e Trinta centavos");
                    } else {
                    printf(" e Trinta e %d centavos\n", CENTAVOSUNI);
                            }
            }else if (CENTAVOSDEZ == 4) {
                if (CENTAVOSUNI == 0) {
                printf(" e Quarenta centavos\n");
                    } else {
                    printf(" e Quarenta e %d centavos\n", CENTAVOSUNI);
                            }
            }else if (CENTAVOSDEZ == 5) {
                if (CENTAVOSUNI == 0) {
                printf(" e Cinquenta centavos\n");
                    } else {
                    printf(" e Cinquenta e %d centavos\n", CENTAVOSUNI);
                            }
            }else if (CENTAVOSDEZ == 6) {
                if (CENTAVOSUNI == 0) {
                printf(" e Sessenta centavos\n");
                    } else {
                    printf(" e Sessenta e %d centavos\n", CENTAVOSUNI);
                            }
            }else if (CENTAVOSDEZ == 7) {
                if (CENTAVOSUNI == 0) {
                printf(" e Setenta centavos\n");
                } else {
                printf(" e Setenta e %d centavos\n", CENTAVOSUNI);
                        }
            } else if (CENTAVOSDEZ == 8) {
                if (CENTAVOSUNI == 0) {
                printf(" e Oitenta centavos\n");
                } else {
                printf(" e Oitenta e %d centavos\n", CENTAVOSUNI);
                        }
            } else if (CENTAVOSDEZ == 9) {
                if (CENTAVOSUNI == 0) {
                printf(" e Noventa centavos\n");
                } else {
                printf(" e Noventa e %d centavos\n", CENTAVOSUNI);
                        }
            }//juro que tentei dexar o mais organizado possivel//
    return 0;
    //agora descobrir uma forma de salvar esse numero em um arquivo//
}
int main(){
    //primeiro fazer o menu, depois faco cada funcao e descubro como implemento a manipulacao de arquivo//
    int OPC;
    float NUM;
    do{
    printf("\t  -----------------------MENU-----------------------\n\n");
    printf("\t ||1- Escrever um numero por extenso               ||\n");
    printf("\t ||2- Imprimir todos os numeros do arquivo em tela ||\n");
    printf("\t ||3- SAIR                                         ||\n");
    printf("\t  --------------------------------------------------\n\n\t");
    scanf("%d",&OPC);
    switch(OPC){
        case 1:
            escrever_numero(NUM); break;
        case 2:
            imprimir_numero(); break;
        case 3:
            break;
        default:
            return 1;
    }
    }while(OPC!=3);
    return 0;
}
    int imprimir_numero(int NUM){

        }

        //fazer a l�gica dos centavos e depois ver sobre a manipula��o de m�dulos//
