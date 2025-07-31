#include <stdio.h>
#include <stdlib.h>

int main()
{
   int NUM;
   printf("Digite sua idade em anos\n");
   scanf("%d",&NUM);
   if((NUM>=1) && (NUM<=13))
   {
       printf("Voce e considerado uma crianca\n");
   }
   else if(NUM>13 && NUM<=20)
   {
       printf("Voce e considerado um adolecente\n");
    }
    else if(NUM>20 && NUM<=50)
    {
        printf("Voce e considerado um adulto\n");
    }
        else if(NUM>50)
        {
            printf("Voce e considerado idoso\n");
        }

    system("pause");
    return 0;
}
