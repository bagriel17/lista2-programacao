#include <stdio.h>
#include <math.h>

int main() {
    int numero, dist10, dist100, dist1000, maisProximo;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    dist10 = abs(numero - 10);
    dist100 = abs(numero - 100);
    dist1000 = abs(numero - 1000);

    if (dist10 <= dist100 && dist10 <= dist1000) {
        maisProximo = 10;
    } else if (dist100 <= dist10 && dist100 <= dist1000) {
        maisProximo = 100;
    } else {
        maisProximo = 1000;
    }

    printf("O número mais próximo é: %d\n", maisProximo);

    return 0;
}


