#include <stdio.h>

int main() {
    int horas;
    float total;

    printf("Digite o número de horas que o carro ficou estacionado: ");
    scanf("%d", &horas);

    if (horas <= 2) {
        total = horas * 5.0;
    } else if (horas <= 5) {
        total = 2 * 5.0 + (horas - 2) * 3.0;
    } else {
        total = 2 * 5.0 + 3 * 3.0 + (horas - 5) * 2.0;
    }

    printf("Total a pagar: R$ %.2f\n", total);

    return 0;
}

