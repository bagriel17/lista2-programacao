#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int n1;
    
    printf("Digite o número que deseja identificar: \n");
    scanf("%d", &n1);
    
    if (n1 % 2 == 0) {
        printf("O número é par!\n");
    } else {
        printf("O número é ímpar!\n");
    }

    return 0;
}