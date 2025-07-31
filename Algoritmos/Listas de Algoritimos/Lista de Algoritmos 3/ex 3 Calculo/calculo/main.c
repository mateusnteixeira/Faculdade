#include <stdio.h>
#include<stdlib.h>
int main() {
  char opcao;
  float num1, num2, num3, media;

  printf("Escolha uma operacao:\n");
  printf("a - Media Aritmetica\n");
  printf("b - Media Harmonica\n");
  printf("c - Media Geometrica\n");
  scanf(" %c", &opcao);

  printf("Digite tres numeros:\n");
  scanf("%f %f %f", &num1, &num2, &num3);

  if (opcao == 'a') {
    media = (num1 + num2 + num3) / 3;
    printf("Media Aritmetica: %.2f\n", media);
  } else if (opcao == 'b') {
    media = 3 / ((1 / num1) + (1 / num2) + (1 / num3));
    printf("Media Harmenica: %.2f\n", media);
  } else if (opcao == 'c') {
    media = pow(num1 * num2 * num3, 1.0 / 3);
    printf("Media Geometrica: %.2f\n", media);
  } else {
    printf("Opcao invalida\n");
  }
    system("pause\n");
  return 0;
}
