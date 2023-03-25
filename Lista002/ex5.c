/*5.    Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre: 
o número digitado ao quadrado e raiz quadrada do número digitado.*/

#include <stdio.h>
#include <math.h>

int main() {
    float num;

    printf("Digite um numero: \n ");
    scanf("%f", &num);

    float Quadrado = pow(num, 2);
    float Raiz_quadrada = sqrt(num);

    if (num > 0) {
        
        printf("O numero ao quadrado e: %.2f \n", Quadrado);
        printf("A raiz quadrada do numero e: %.2f \n", Raiz_quadrada);
    } else {
        printf("O numero digitado nao e positivo. \n");
    }

    return 0;
}