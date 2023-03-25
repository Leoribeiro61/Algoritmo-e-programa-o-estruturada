/*1.    Faça um programa que leia dois números e mostre qual deles é o maior.*/

#include <stdio.h>

int main() {
    float num1, num2;

    printf("Digite o primeiro numero: \n");
    scanf("%f", &num1);

    printf("Digite o segundo numero: \n ");
    scanf("%f", &num2);

    if (num1 > num2) {
        printf("O primeiro numero %.2f e maior do que o segundo numero %.2f \n", num1, num2);
    } else if (num2 > num1) {
        printf("O segundo numero %.2f e maior do que o primeiro numero %.2f \n", num2, num1);
    } else {
        printf("Os dois numeros sao iguais %.2f \n", num1);
    }

    return 0;
}