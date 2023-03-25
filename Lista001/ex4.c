/*4. Escreva um algoritmo para ler as dimensões de um retângulo 
(base e altura), calcular e escrever a área do retângulo.*/

#include <stdio.h>

int main() {
    float Base;
    float Altura;
    float Area;

    printf("Digite a base do retangulo: \n ");
    scanf("%f", &Base);

    printf("Digite a altura do retangulo:\n");
    scanf("%f", &Altura);

    Area = Base * Altura;

    printf("A area do retangulo eh: %.2f \n", Area);

    return 0;
}