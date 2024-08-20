#include <stdio.h>
#include <locale.h>

int main()
{
    int num;
    
    setlocale(LC_ALL, "Portuguese");
    printf("Digite algum número\n");
    scanf("%d", &num);
    
    if (num <= 100, num >= 1) {
        printf("\nSeu número está entre 1 e 100\n");
    } else if (num > 100) {
        printf("\nSeu número não está entre 1 e 100\n");
    } else{
        printf("Seu número não é um inteiro positivo\n");
    }

    return 0;
}
