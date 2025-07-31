#include <stdio.h>
#include <stdlib.h>

void transformar(int TOT){
 int REST,REST2,REST3,N1,N2,N3,N4,N5;
 N1=TOT/100;
 REST=TOT%100;
 N2=REST/50;
 REST2=REST%50;
 N3=REST2/10;
 REST3=REST2%10;
 N4=REST3/5;
 N5=REST3%5;
 printf("\nO minimo de notas possiveis para transformar de %d reais e:\n %d de 100 reais \n%d de 50 reais \n%d de 10 reais \n%d de 5 reais  \n%d de 1 real",TOT,N1,N2,N3,N4,N5);
 return 0;
}

int main(){
    int TOT;
    printf("Digite o dinheiro total que vc quer transformar em notas:   ");
    scanf("%d",&TOT);
    transformar(TOT);
    return 0;
}
