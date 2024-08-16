#include <stdio.h>

int main () {

    float valor;
    int quant, prod;

    printf("Digite o código do produto que deseja comprar: \n");
    scanf("%d", &prod);
    printf("Digite a quantidade que deseja comprar: \n");
    scanf("%d", &quant);

    switch(prod) {
        case 1:
        valor = 150.00 * quant;
        break;
        case 2:
        valor = 50,00 * quant;
        case 3:
        valor = 80,00 * quant;
        case 4:
        valor = 120,00 * quant;
        case 5:
        valor = 90,00 * quant;
        default:
        break;
    }
    if (1 <= quant <= 5) {
        valor = valor - (valor * 0.05);
    } else if (6 <= quant <= 10) {
        valor = valor - (valor * 0.10);
    } else if (quant > 10) {
        valor = valor - (valor * 0.15);
    }
    
    printf("VALOR = %2.f", valor);
    return 0;
}
