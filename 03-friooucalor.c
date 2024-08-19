#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int t;
    
    printf("Digite a temperatura que deseja identificar: \n");
    scanf("%d", &t);
    
    if (t >= 30) {
        printf("Quente! :D\n");
    } else {
        printf("Frio! :O\n");
    }

    return 0;
}