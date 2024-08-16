#include <stdio.h>
#include <locale.h>
int main() {
    
    setlocale (LC_ALL, "Portuguese");
    int opcao, assentos_disponiveis, assentos_reservar;
    char *evento;

    // Exibe as opções de evento
    printf("Selecione o tipo de evento:\n");
    printf("1 - Concerto (500 assentos)\n");
    printf("2 - Teatro (200 assentos)\n");
    printf("3 - Evento Esportivo (1000 assentos)\n");
    printf("4 - Conferência (300 assentos)\n");
    printf("Escolha uma opção (1-4): ");
    scanf("%d", &opcao);

    // Define a capacidade de acordo com a escolha do usuário
    switch (opcao) {
        case 1:
            evento = "Concerto";
            assentos_disponiveis = 500;
            break;
        case 2:
            evento = "Teatro";
            assentos_disponiveis = 200;
            break;
        case 3:
            evento = "Evento Esportivo";
            assentos_disponiveis = 1000;
            break;
        case 4:
            evento = "Conferência";
            assentos_disponiveis = 300;
            break;
        default:
            printf("Opção inválida!\n");
            return 1; // Encerra o programa com código de erro
    }

    // Solicita a quantidade de assentos a serem reservados
    printf("Você escolheu %s. Quantos assentos deseja reservar? ", evento);
    scanf("%d", &assentos_reservar);

    // Verifica se há assentos suficientes disponíveis
    if (assentos_reservar <= assentos_disponiveis) {
        assentos_disponiveis -= assentos_reservar;
        printf("Reserva confirmada! Você reservou %d assento(s) para o %s.\n", assentos_reservar, evento);
        printf("Assentos restantes: %d\n", assentos_disponiveis);
    } else {
        printf("Desculpe, não há assentos suficientes disponíveis. Apenas %d assento(s) restantes para o %s.\n", assentos_disponiveis, evento);
    }

    return 0;
}
