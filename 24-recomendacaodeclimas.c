

#include <stdio.h>

int main () {

    int temp, dia;

    printf("Digite a temperatura em graus: \n");
    scanf("%d", &temp);
    printf("Digite o tipo de clima do dia (1.ENSOLARADO, 2.NUBLADO OU 3.CHUVOSO: \n");
    scanf("%d", &dia);

    switch(dia) {
        case 1:
        if (temp>25) {
            printf("Recomendamos atividades ao ar livre como ir à praia ou fazer um piquenique. \n");
        } else if ( 15 <= temp <= 25){
            printf("Recomendamos caminhadas ou passeios de bicicleta. \n");
        } else if ( temp < 15){
            printf("Recomendamos atividades como fotografia da natureza ou observação de pássaros são ideais. \n");
        }
        break;
        case 2:
        if (temp>20) {
            printf("Recomendamos visitar museus ou fazer compras em centros comerciais ao ar livre. \n");
        } else if ( 10 <= temp <= 20){
            printf("Recomendamos  passeios culturais, como galerias de arte ou teatros.. \n");
        } else if ( temp < 10){
            printf("Recomendamos leitura em bibliotecas ou sessões de cinema. \n");
        }
        break;
        case 3:
        if (temp>15) {
            printf("Recomendamos programa pode sugerir visitar um spa ou fazer aulas de culinária \n");
        } else if ( 5 <= temp <= 15){
            printf("Recomendamos museus de ciência ou sessões de boliche. \n");
        } else if ( temp < 5){
            printf("Recomendamos uma tarde de jogos de tabuleiro em casa ou uma maratona de filmes. \n");
        }
        break;
        default:
        break;
    }
        
    return 0;
}
