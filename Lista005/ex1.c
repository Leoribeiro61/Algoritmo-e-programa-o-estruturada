#include <stdio.h>

float le_valida_media() {
    float media;
    do {
        printf("Informe a media (entre 0 e 10): ");
        scanf("%f", &media);
        if (media < 0 || media > 10) {
            printf("Media invalida. Tente novamente.\n");
        }
    } while (media < 0 || media > 10);
    return media;
}

float calcular_media(int n, float soma) {
    return soma / n;
}

int main() {
    int i, reprovados = 0, aprovados = 0;
    float menor_media = 10.0, media, soma = 0.0;

    printf("------------------\n");
    printf("Relatorio da turma\n");
    printf("------------------\n");

    for (i = 1; i <= 25; i++) {
        printf("Informe a %da nota (ou -1 para encerrar): ", i);
        scanf("%f", &media);
        if (media == -1) {
            break;
        }
        soma += media;
        if (media < menor_media) {
            menor_media = media;
        }
        if (media < 6.9) {
            reprovados++;
        } else {
            aprovados++;
        }
    }

    if (i == 1) {
        printf("\nNenhuma media foi informada.\n");
    } else {
        float media_turma = calcular_media(i - 1, soma);
        printf("\nMedia da turma: %.1f\n", media_turma);
        printf("Maior nota: %.1f\n", 10.0 - menor_media);
        printf("Menor nota: %.1f\n", 10.0 - soma / (i - 1));
        printf("Reprovados: %d\n", reprovados);
        printf("Aprovados: %d\n", aprovados);
    }

    printf("------------------\n");
    printf("    BSB - 2023\n");

    return 0;
}