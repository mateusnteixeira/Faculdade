#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
   int x1,x2,y1,y2,D;
   printf("Digite a posicao do primeiro ponto, sendo o primeiro numero o X e o segundo o Y (separe eles por espaco):   ");
   scanf("%d %d",&x1 , &y1);
   printf("\nAgora escreva a posicao do segundo ponto, da mesma forma que o primeiro:   ");
   scanf("%d %d", &x2 , &y2);
   D=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
   printf("\nA distancia entre os dois pontos e: %d ",D);
   system("\npause\n");
    return 0;
}
