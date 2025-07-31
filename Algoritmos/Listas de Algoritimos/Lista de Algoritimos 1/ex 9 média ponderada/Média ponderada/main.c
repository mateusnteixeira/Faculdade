#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    float N1,N2, P1,P2,MEDP;
    printf("escreva a primeira nota\n");
    scanf("%f",&N1);
    printf("e seu peso logo em seguida\n");
    scanf("%f",&P1);
    printf("escreva a segunda nota\n");
    scanf("%f",&N2);
    printf("escreva seu peso\n");
    scanf("%f",&P2);
    MEDP=((N1*P1)+(N2*P2))/(P1+P2);
    printf("A media ponderada e igual a =\n %1f\n",MEDP);
    system("pause");

    return 0;
}
