#include <stdio.h>

int main() {
    float renda, imposto;

    printf("Digite sua renda anual: R$ ");
    scanf("%f", &renda);

    if (renda <= 22000.00) {
        imposto = renda * 0.05; // Imposto de 5%
    } else if (renda <= 45000.00) {
        imposto = renda * 0.15; // Imposto de 15%
    } else {
        imposto = renda * 0.25; // Imposto de 25%
    }

    printf("Imposto devido: R$ %.2f\n", imposto);

    return 0;
}
