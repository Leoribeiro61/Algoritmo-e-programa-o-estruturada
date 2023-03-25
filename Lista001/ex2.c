/* 2. Escreva um programa que pergunte qual o raio de um círculo 
e imprima a sua área. 
*/

#include <stdio.h>

#define PI 3.14159

int main() {
    float Raio;
    float Area;

    printf("Digite o valor do raio do circulo: \n");
    scanf("%f", &Raio);

    Area = PI * Raio * Raio; 

    printf("A area do circulo de raio %.2f: %.2f", Raio, Area);

    return 0;
}