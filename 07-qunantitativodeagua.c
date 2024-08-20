#include <stdio.h>
#include <locale.h>

int main()
{
    int lit;
    
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o quantitativo de água, em Litros, que deseja classificar: \n");
    scanf("%d", &lit);
    
    if (lit < 5) {
        printf("\nNível de água: Baixo!\n");
    } else if (lit >= 5, lit < 10) {
        printf("\nNível de água: Médio!\n");
    } else{
        printf("Nível de água: Alto!");
    }

    return 0;
}
