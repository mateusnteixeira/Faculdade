#include<stdio.h>
#include<stdlib.h>
//fzr um código para ler qualquer numero até 999.999 e escrever por extenso esse mesmo número//
int escrever_numero(float NUM){

    printf("Digite o valor que deseja (no maximo ate 999.999,99$)\n");
    scanf("%f",&NUM);
    if(NUM<999999&&NUM>0){
       return NUM;
    }else if(NUM>999999||NUM<0){
        printf("Numero invalido!!\nReinicie o programa e tente com um valor valido\n");
    return 1;
    }
}

int main(){
    //primeiro fazer o menu, depois faço cada função e descubro como implemento a manipulação de arquivo//
    int OPC;
    int NUM;
    printf("\t  -----------------------MENU-----------------------\n\n");
    printf("\t ||1- Escrever um numero por extenso               ||\n");
    printf("\t ||2- Imprimir todos os numeros do arquivo em tela ||\n");
    printf("\t ||3- SAIR                                         ||\n");
    printf("\t  --------------------------------------------------\n\n");
    scanf("%d",&OPC);
    switch(OPC){
        case 1:
            escrever_numero(NUM); break;
        case 2:
            imprimir_numero(NUM); break;
        case 3:
            break;
        default:
            return 1;
    }
    return 0;
}

    int imprimir_numero(float NUM){
        int CENTM,DEZM,UNIM,CENT,DEZ,UNI,REST1,REST2,REST3,REST4,CENTAVOS,CENTAVOSDEZ,CENTAVOSUNI;
        CENTM=NUM/100000;
        REST1=NUM%100000;
        DEZM=REST1/10000;
        REST2=REST1%10000;
        UNIM=REST2/1000;
        REST3=REST2%1000;
        CENT=REST3/100;
        REST4=REST3%100;
        DEZ=REST4/10;
        UNI=REST4%10;
        CENTAVOS=(int)(UNI*100)%100;
        CENTAVOSDEZ= CENTAVOS/10;

        switch(CENTM){
        case 0:
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
            break;
            case 1:
                if(CENTM!=0||DEZM!=0){
            printf("Um mil ");break;}
            else{
                printf("Mil");break;
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
            break;
            case 1:
                if(DEZ!=0||UNI!=0){
            printf("e Cento e ");break;}
            else{
                printf("e Cem reais")
            }break;
            case 2:
            if(DEZ!=0||UNI!=0){
            printf("e Duzentos e ");break;}
            else{
                printf("e Duzentos reais")
            }break;
            case 3:
            if(DEZ!=0||UNI!=0){
            printf("e Trezentos e ");break;}
            else{
                printf("e Trezentos reais")
            }break;
            case 4:
            if(DEZ!=0||UNI!=0){
            printf("e Quatrocentos e ");break;}
            else{
                printf("e Quatrocentos reais")
            }break;
            case 5:
            if(DEZ!=0||UNI!=0){
            printf("e Quinhentos e ");break;}
            else{
                printf("e Quinhentos reais")
            }break;
            case 6:
            if(DEZ!=0||UNI!=0){
            printf("e Seiscentos e ");break;}
            else{
                printf("e Seiscentos reais")
            }break;
            case 7:
            if(DEZ!=0||UNI!=0){
            printf("e Setecentos e ");break;}
            else{
                printf("e Setecentos reais")
            }break;
            case 8:
            if(DEZ!=0||UNI!=0){
            printf("e Oitocentos e ");break;}
            else{
                printf("e Oitocentos reais")
            }break;
            case 9:
            if(DEZ!=0||UNI!=0){
            printf("e Novecentos e ");break;}
            else{
                printf("e Novecentos reais")
            }break;
               }
               switch(DEZM){
        case 0:
        break;
        case 1:
        switch(DEZ){
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
            if(NUM!=0){
        printf("Vinte e ");
        }else{
         printf("Vinte  ");
        }
        break;
        case 3:
            if(NUM!=0){
        printf("Trinta e ");}
        else{
            printf("Trinta  ");
        }
        break;
        case 4:
            if(NUM!=0){
        printf("Quarenta  ");}
        else {
            printf("Quarent  ");
        }
        break;
        case 5:
            if(NUM!=0){
        printf("Cinquenta e ");}
        else{
            printf("Cinquenta  ");
        }
        break;
        case 6:
            if(NUM!=0){
        printf("Sessenta e ");}
        else{
            printf("Sessenta  ");
        }
        break;
        case 7:
            if(NUM!=0){
        printf("Setenta e ");}
        else{
            printf("Setenta  ");
        }
        break;
        case 8:
            if(NUM!=0){
        printf("Oitenta e ");}
        else{
            printf("Oitenta  ");
        }
        break;
        case 9:
            if(NUM!=0){
        printf("Noventa e ");}
        else{
            printf("Noventa ");
        }
        break;
        }
       switch(UNIM){
            case 0:
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
            switch(CENTAVOSDEZ){
            case 0:
            break;
            case 1:
                switch(CENTAVOSUNI){
            case 0:
            printf("Dez centavos"); break;
            case 1:
            printf("Onze centavos");break;
            case 2:
            printf("Doze centavos");break;
            case 3:
            printf("Treze centavos");break;
            case 4:
            printf("Quatorze centavos");break;
            case 5:
            printf("Quinze centavos");break;
            case 6:
            printf("Dezesseis centavos");break;
            case 7:
            printf("Dezessete centavos");break;
            case 8:
            printf("Dezoito centavos");break;
            case 9:
            printf("Dezenove centavos");break;
            }
        break;
        case 2:
            if(NUM!=0){
        printf("Vinte e ");
        }else{
         printf("Vinte centavos ");
        }
        break;
        case 3:
            if(NUM!=0){
        printf("Trinta e ");}
        else{
            printf("Trinta centavos ");
        }
        break;
        case 4:
            if(NUM!=0){
        printf("Quarenta  ");}
        else {
            printf("Quarent centavos ");
        }
        break;
        case 5:
            if(NUM!=0){
        printf("Cinquenta e ");}
        else{
            printf("Cinquenta centavos ");
        }
        break;
        case 6:
            if(NUM!=0){
        printf("Sessenta e ");}
        else{
            printf("Sessenta centavos ");
        }
        break;
        case 7:
            if(NUM!=0){
        printf("Setenta e ");}
        else{
            printf("Setenta centavos ");
        }
        break;
        case 8:
            if(NUM!=0){
        printf("Oitenta e ");}
        else{
            printf("Oitenta centavos ");
        }
        break;
        case 9:
            if(NUM!=0){
        printf("Noventa e ");}
        else{
            printf("Noventa centavos ");
        }
        break;
        }
        }
        //fazer a lógica dos centavos e depois ver sobre a manipulação de módulos//
