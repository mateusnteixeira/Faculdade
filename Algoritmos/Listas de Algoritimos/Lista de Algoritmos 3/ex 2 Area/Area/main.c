#include <stdio.h>
#include <stdlib.h>
#include<math.h>
void Area_triangulo()
{
     float N1,N2,AR;
    printf("Digite o valor da base do triangulo: \n");
    scanf("%f", &N1);
    printf("Digite a altura do triangulo: \n");
    scanf("%f", &N2);
    AR= (N1*N2)/2;
    printf("A area do triangulo e: \n%f\n",AR);

    return 0;
}
void Area_circulo(){
    float RAIO, RES;
    printf("Digite o raio");
    scanf("%f",&RAIO);
    RES=3,1415*(RAIO*RAIO);
    printf("Area do circulo e: %f \n",RES);
}
void Area_cubo(){
    float AREST,RES;
    printf("Digite o valor da aresta\n ");
    scanf("%f",&AREST);
    RES=6*(AREST*AREST);
    printf("A area do cubo e: %f \n",RES);
}
void Area_cilindro(){
    float R,AL,RES;
    printf("DIgite o raio e a altura:\n   ");
    scanf("%f %f",&R,&AL);
    RES=2*3,1415*R*(R+AL);
    printf("A area do cilindro e:  %f \n",RES);
}
int main()
{
    int OPC;
    printf("Escolha um numero que representa o calculo que voce quer fazer:\n");
    printf("1-Area de triangulo\n");
    printf("2-Area do circulo\n");
    printf("3-Area de cubo\n");
    printf("4-Area cilindro\n");
    scanf(" %d", &OPC);
    switch(OPC){
    case 1:
        Area_triangulo();
        break;
    case 2:
        Area_circulo();
        break;
    case 3:
        Area_cubo();
        break;
    case 4:
        Area_cilindro();
        break;
    default:
        printf("Opcao invalida\n");
        return 0;
    }
    system("pause\n");
    return 0;
}
