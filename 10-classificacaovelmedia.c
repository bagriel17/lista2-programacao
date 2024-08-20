#include <stdio.h>

int main() {
    float velocidade;

    printf("Digite a velocidade do veículo (km/h): ");
    scanf("%f", &velocidade);

    if (velocidade < 30) {
        printf("Classificação: Baixa\n");
    } else if (velocidade >= 30 && velocidade <= 60) {
        printf("Classificação: Média\n");
    } else {
        printf("Classificação: Alta\n");
    }

    return 0;
}
