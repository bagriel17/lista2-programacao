//INDICADOR DE SINAL - PROGRAMAÇÃO LISTA 2 (1/26)

#include <stdio.h>

int main()

{
    int num1;
    
    printf("Digite qualquer número: \n");
    scanf("%d", &num1);
    
    if (num1 > 0) {
        printf("O número é positivo!\n");
    } else if (num1 <0) {
        printf("O número é negativo!\n");
    } else {
        printf("O número é nulo!\n");
    }
    return 0;
}