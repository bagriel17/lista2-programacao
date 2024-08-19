#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int idade;
    
    printf("Digite sua idade: \n");
    scanf("%d", &idade);
    
    if (idade > 17) {
        printf("Você está apto à votar");
    } else {
        printf("Não está apto à votar");
    }

    return 0;
}
