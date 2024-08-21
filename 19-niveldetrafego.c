#include <stdio.h>

int main() {
    int horario, trafego;

    printf("Digite o horário (1 = manhã, 2 = tarde, 3 = noite): ");
    scanf("%d", &horario);
    printf("Digite o nível de tráfego (1 = baixo, 2 = médio, 3 = alto): ");
    scanf("%d", &trafego);
    
    switch (horario) {
        case 1: // Manhã
        case 2: // Tarde
        case 3: // Noite
            if (trafego == 1) {
                printf("Tempo do semáforo: Verde (10s), Amarelo (5s), Vermelho (15s)\n");
            } else if (trafego == 2) {
                printf("Tempo do semáforo: Verde (15s), Amarelo (5s), Vermelho (10s)\n");
            } else if (trafego == 3) {
                printf("Tempo do semáforo: Verde (20s), Amarelo (5s), Vermelho (5s)\n");
            } else {
                printf("Nível de tráfego inválido!\n");
            }
            break;
        default:
            printf("Horário inválido!\n");
            break;
    }

    return 0;
}

