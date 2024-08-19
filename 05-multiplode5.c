#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int n1;
    
    printf("Digite o número que deseja identificar se é múltiplo de 5: \n");
    scanf("%d", &n1);
    
    if (n1 % 5 == 5) {
        printf("O número é múltiplo de 5!\n");
    } else if (n1 % 5 ==0) {
        printf("O número é múltiplo de 5!\n");
    } else {
        printf("O número não é mútiplo de 5!\n");
    }

    return 0;
}