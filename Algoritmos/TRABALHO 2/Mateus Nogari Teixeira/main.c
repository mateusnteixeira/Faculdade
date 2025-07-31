#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TAM 50
#define MAX_MESES 12
#define MAX_DIAS 31
#define MAX_HORAS 24

struct DIAS 
{
    int HORAS[MAX_HORAS];
};
//--------------------
struct MES 
{
    char NOMESMES[20];
    int TOTAL_DIAS;
    struct DIAS DIASMES[MAX_DIAS];
};
//--------------------
struct ANO 
{
    struct MES MESES[MAX_MESES];    //
};
//--------------------
struct FUNCIONARIO
{
    int CODIGO, ANO, VALOR,OCUPADO; //codigo de funcionario, ano, valor da hora e se a posicao esta ocupada//
    char NOME[TAM], CARGO[TAM];    //nome do funcionario e seu cargo//
    struct ANO ano;
}FICHA[TAM];
int CONT=0;
//--------------------Inicializa ano
 void INICIALIZA_ANO(struct ANO *ano) { //fui verificar pq nao estava rodando o codigo e tinha que colocar o * antes do ano//
    const char *NOMEMES[] = {"janeiro", "fevereiro", "marco", "abril", "maio", "junho", //nessa linha tambem tinha que colocar o *//
                             "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};
    int DIASMES[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    for (int i = 0; i < MAX_MESES; i++) {
        strcpy(ano->MESES[i].NOMESMES, NOMEMES[i]); // copia o nome do mes//
        ano->MESES[i].TOTAL_DIAS = DIASMES[i];      // define o numero de dias de cada mes//
        for (int dia = 0; dia < ano->MESES[i].TOTAL_DIAS; dia++) {
            for (int hora = 0; hora < MAX_HORAS; hora++) {
                ano->MESES[i].DIASMES[dia].HORAS[hora] = 0; // inicializa todas as horas//
            }
        }
    }
 }

//--------------------//Horas trabalhadas
 void HORAS_TRA() {
    int codigo, mes, dia, hora, encontrado = 0;

    printf("\nInforme o codigo do funcionario:\n");
    scanf("%d", &codigo);

    for (int I = 0; I < TAM; I++) {
        if (FICHA[I].CODIGO == codigo && FICHA[I].OCUPADO == 1) {
            encontrado = 1;

            printf("\nDigite o numero correspondente ao mes (1 a 12):\n");
            scanf("%d", &mes);

            if (mes < 1 || mes > 12) {  //verifica o mes informado//
                printf("\nMes invalido!\n");
                return;
            }

            printf("\nDigite o dia do mes:\n");
            scanf("%d", &dia);

            if (dia < 1 || dia > FICHA[I].ano.MESES[mes - 1].TOTAL_DIAS) {  //verifica o dia informado//
                printf("\nDia invalido para o mes escolhido!\n");
                return;
            }

            printf("\nDigite o numero de horas trabalhadas no dia (0 a 24):\n");
            scanf("%d", &hora);

            if (hora < 0 || hora > 24) {    //verifica as horas informadas//
                printf("\nQuantidade de horas invalida para um unico dia!\n");
                return;
            }

            FICHA[I].ano.MESES[mes - 1].DIASMES[dia - 1].HORAS[0] = hora;  // armazena a hora informada, supondo que sera informada apenas uma hora por dia, senao o dado sera sobrescrito//
            printf("\nHoras registradas com sucesso\n");
            return;
        }
    }

    if (encontrado == 0) {
        printf("\nFuncionario nao encontrado!\n"); //se  nao encontrar o funcionario//
    }
 }

//--------------------//Cadastrar
 void CADASTRAR() //cadastra um novo funcionario//
 {
    int POSICAO_LIVRE;
    POSICAO_LIVRE = ENCONTRAR_POS_LIVRE();
        if(POSICAO_LIVRE == -1)
        {
            COLOCAR_DADOS(CONT); //se nao tiver posicao live//
            CONT++;
        }
        else 
        {
            COLOCAR_DADOS(POSICAO_LIVRE); //se tiver posicao livre//
        }

 }
//--------------------//Listar
 void LISTAR() //listar os dados dos funcionarios//
 {
    int I;
    if(CONT==0)
    {
        printf("\nNenhum funcionario registrado\n"); //caso nao tenha nenhum funcionario registrado//
    }
    else
    { 
        printf("\n-----------------LISTA-----------------\n");
        for(I=0;I<CONT;I++)
        {
            if(FICHA[I].OCUPADO == 1){
                printf("\nCodigo do funcionario: %d", FICHA[I].CODIGO);
                printf("\tNome do funcionario: %s\n", FICHA[I].NOME);
                printf("\nCargo do funcionario: %s", FICHA[I].CARGO);
                printf("\tValor da hora de trabalho: %d\n",FICHA[I].VALOR);
                printf("\n---------------------------------------\n");
        }
        }
    }
 }
//--------------------//Alterar
 void ALTERAR()
 {
    char NOME_ALT[40];
    int I, FLAG;
        FLAG=0;
        printf("\nDigite o nome do funcionario que deseja alterar o valor do salario\n");
        fflush(stdin);
        gets(NOME_ALT);
        for(I=0;I<CONT;I++)
        {
            if ( strcmp(NOME_ALT,FICHA[I].NOME)==0) //verifica se os nomes sao iguais//
            {
                printf("\nDigite o novo salario:\n");
                scanf("%d", &FICHA[I].VALOR); //sobresqcreve o dado alterando o valor//
                FLAG = 1; //avisa que encontrou o funcionario desejado//
            }
        }
        if(FLAG==0) //se nao encontrou nenhum funcionario//
            printf("\nFuncionario nao encontrado\n"); 
 }
//--------------------//Excluir
 void EXCLUIR()
 {
    char NOME_EXC[TAM];
    int I, FLAG = 0, CONFIRMA;

        printf("\nDigite o nome do funcionario que deseja excluir\n");
        fflush(stdin);
        gets(NOME_EXC);
        for(I=0;I<CONT;I++)
        {
            if ( strcmp(NOME_EXC,FICHA[I].NOME)==0 && (FICHA[I].OCUPADO == 1))
            {
                printf("\nVoce tem certeza\n1-SIM\n2-NAO\n");
                scanf("%d",&CONFIRMA);
                if(CONFIRMA==2)
                {
                    FLAG = 1;
                }
                else{
                    FICHA[I].OCUPADO = 0;
                    printf("\nFuncionario %s excluido do sistema :]\n",FICHA[I].NOME);
                FLAG = 1;
                }
            }
        }
        if(FLAG==0)
            printf("\nFuncionario nao encontrado\n");

 }
//--------------------//Inicializa posicao
 void INICIALIZA_POSICAO()
 {
    int I;
    for(I=0;I<TAM;I++)
    {
        FICHA[I].OCUPADO = 0;
    }
 }
//--------------------//Encontrar posicao livre
 int ENCONTRAR_POS_LIVRE()
 {
    int I, ACHO = 0;
    for(I=0;I<CONT;I++)
    {
        if(FICHA[I].OCUPADO == 0)
        {
            ACHO = 1;  //achou uma posicao livre//
            return I; //retorna a posicao//
        }
    } 
    if(ACHO==0)
       return -1; //nao achou uma posicao livre//
 }
//--------------------//Colocar dados
    void COLOCAR_DADOS(int M)
    {
    printf("\nDigite o nome do funcionario\n");
    fflush(stdin);
    gets(FICHA[M].NOME);
    printf("\nDigite o codigo do funcionario\n");
    scanf("%d", &FICHA[M].CODIGO);
    printf("\nDigite o cargo do funcionario\n");
    fflush(stdin);
    gets(FICHA[M].CARGO);
    printf("\nDigite o valor da hora deste funcionario\n");
    scanf("%d", &FICHA[M].VALOR);
    printf("\nFuncionario cadastrado com sucesso\n");
    FICHA[M].OCUPADO = 1;
    }
//--------------------//Cal Sal
 void CAL_SAL()
 {
    char NOME_AUX[TAM];
    int T,FLAG = 0;
        printf("\nDigite o nome do funcionario que voce deseja calcular o salario\n\n(Lembre-se que ja deve ter informado utilizando a opcao 2 do menu as horas trabalhadas no mes desejado)\n"); //lembrete no final para o usuario//
        fflush(stdin);
        gets(NOME_AUX);  
        for(T=0;T<CONT;T++){
            if(strcmp(NOME_AUX,FICHA[T].NOME) == 0){    //verifica se o funcionario existe//
                FLAG = 1;
                    CONTA_SALARIO(T);    //caso exista passo só o valor de T//
                    return;
            }
        }
        if(FLAG == 0) //caso nao exista//
        {
            printf("\nFuncionario nao encontrado\n");
        }
  }
//--------------------//Conta salario
 void CONTA_SALARIO(int indice){ //recebe o indice do funcionario passado como valor de T//
    int DIA, MES_RECEBER, TOTAL_HORAS = 0, SALARIO_TOTAL; 
            printf("\nDigite o mes que deseja contabilizar o salario a receber(1 a 12):\n");
            scanf("%d", &MES_RECEBER);
            printf("\nCalculando o valor do salario...\n");
                if(MES_RECEBER<1 || MES_RECEBER>12){    //verifica se o mes e valido//
                    printf("\nO mes informado e invalido\n");
                    return;
                } 
                    for (DIA=0; DIA<FICHA[indice].ano.MESES[MES_RECEBER - 1].TOTAL_DIAS; DIA++){    //passa por todos os dias do mes selecionado//
                        TOTAL_HORAS += FICHA[indice].ano.MESES[MES_RECEBER - 1].DIASMES[DIA].HORAS[0];  //considerando que só um dado de hora e definido por dia//
                }
                    SALARIO_TOTAL = TOTAL_HORAS * FICHA[indice].VALOR;
                        printf("\nO Salario total que o funcionario(a) %s ira receber neste mes de %s sera de %d",FICHA[indice].NOME, FICHA[indice].ano.MESES[MES_RECEBER - 1].NOMESMES, SALARIO_TOTAL);
 }
//--------------------//Main
 int main()
  {
    int OPCAO;
    
    for (int I = 0; I < TAM; I++) {
        INICIALIZA_ANO(&FICHA[I].ano); //inicializa o ano de cada funcionario com 0//
    }       //tambem descobri que o & nesse caso deve ser usado para modificar diretamente a estrutura de dados, caso contrario eu estaria modificando algo que depois seria "esquecido", uma copia do que queria//
    INICIALIZA_POSICAO(); //inicializa o campo ocupado com 0 para deixar ele livre//
    do
    {
        printf("\n===============MENU==============\n");
        printf("|| 1- Cadastrar                 ||\n|| 2- Inserir horas trabalhadas ||\n|| 3- Calcular Salario          ||\n|| 4- Listar Funcionarios       ||\n|| 5- Alterar informacoes       ||\n|| 6- Excluir                   ||\n|| 7- Sair                      ||\n");
        printf("=================================\n");
        scanf("%d", &OPCAO);
            switch(OPCAO)
            {
                case 1: CADASTRAR();
                    break;
                case 2: HORAS_TRA();
                    break;
                case 3: CAL_SAL();
                    break;
                case 4: LISTAR();
                    break;
                case 5: ALTERAR();
                    break;
                case 6: EXCLUIR();
                    break;
                case 7:
                    printf("\nEncerrando o programa...\n");
                    break;
                default:
                    printf("\nOpcao invalida!\n");
            }

    }while(OPCAO != 7);
    system("pause");
    return 0;
 }