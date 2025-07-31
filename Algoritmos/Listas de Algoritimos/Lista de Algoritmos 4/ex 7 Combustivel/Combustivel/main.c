#include <stdio.h>
#include<stdlib.h>


float calcularDistancia(float tempo, float velocidadeMedia) {
    return tempo * velocidadeMedia;
}
float calcularConsumo(float distancia) {
    return distancia / 12.0;
}
int main() {
    float tempo, velocidadeMedia, distancia, consumo;
        printf("Digite o tempo da viagem (em horas): ");
        scanf("%f", &tempo);
        printf("Digite a velocidade media da viagem (em km/h): ");
        scanf("%f", &velocidadeMedia);
        distancia = calcularDistancia(tempo, velocidadeMedia);
        consumo = calcularConsumo(distancia);
        printf("A distancia percorrida foi: %.2f km\n", distancia);
        printf("O consumo de combustivel foi: %.2f litros\n", consumo);
    return 0;
}
