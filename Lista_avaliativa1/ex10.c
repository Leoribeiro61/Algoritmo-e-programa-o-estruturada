#include <stdio.h>

int main(){

    int soma = 0, num;
    float media;
    
    for (int i = 0; i < 10; i++){
        printf("Digite um numero: ");
        scanf("%d", &num);
        soma += num;
    }

    media = soma / 10;

    printf("A media de todos os numeros digitados e: %.2f", media);

    return 0;
}