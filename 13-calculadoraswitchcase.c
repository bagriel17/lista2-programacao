#include <stdio.h>

int main () {

    int n1, n2;
    char op;
    
    printf("Escolha o operador (+, -, *, /):\n");
    scanf("%s", &op);

    printf("Digite o valor do primeiro numero: \n");
    scanf("%d", &n1);

    printf("Digite o valor do segundo numero: \n");
    scanf("%d", &n2);
    
    switch(op) {
        case '+':
            printf("O resultado é: %d\n", n1 + n2);
            break;
        case '-':
            printf("O resultado é: %d\n", n1 - n2);
            break;
        case '*':
            printf("O resultado é: %d\n", n1 * n2);
            break;
        case '/':
            printf("O resultado é: %d\n", n1 / n2);
            break; 
        default:
            printf("Operador invalido! \n");
            break;
    }
    return 0;
}