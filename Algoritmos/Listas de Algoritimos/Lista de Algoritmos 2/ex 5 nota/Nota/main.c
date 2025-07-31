#include <stdio.h>
#include <stdlib.h>

int main()
{
  int COD,N1,N2,N3,NF;
  printf("Digite seu codigo de aluno\n");
  scanf("%d",&COD);
  printf("Digite sua maior nota\n");
  scanf("%d",&N1);
  printf("Agora as outras duas\n");
  scanf("%d %d",&N2,&N3);
  NF=((N1*4)+(N2*3)+(N3*3))/10;
  if (NF>=5)
  {
      printf("Seu codigo e %d  com as notas\n %d \n %d \n %d \n tendo uma media de %d\n Portanto esta APROVADO\n",COD,N1,N2,N3,NF);

  }
  else {
    printf("Seu codigo e  %d  com as notas\n %d \n %d \n %d \n tendo uma media de %d \n E esta REPROVADO\n",COD,N1,N2,N3,NF);
  }
  system("pause");
    return 0;
}
