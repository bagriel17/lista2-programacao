#include <stdio.h>

int main() {
    float valorInicial, valorFinal;

    printf("Digite o valor da compra: R$ ");
    scanf("%f", &valorInicial);

    if (valorInicial <= 100) {
        valorFinal = valorInicial * 0.95; 
    } else if (valorInicial <= 500) {
        valorFinal = valorInicial * 0.90; 
    } else {
        valorFinal = valorInicial * 0.85;
    }

    printf("Valor final com desconto: R$ %.2f\n", valorFinal);

    return 0;
}
