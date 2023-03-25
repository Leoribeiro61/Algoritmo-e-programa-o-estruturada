/*4.    Faça um programa que leia o salário de um trabalhador e o valor da 
prestação de um empréstimo. Se a prestação, for maior que 20% do salário, 
imprima: “Empréstimo não concedido.”, caso contrário, imprima: “Empréstimo concedido.”*/

#include <stdio.h>

int main() {
    float Salario, Prestacao;

    printf("Digite o salario do trabalhador: \n ");
    scanf("%f", &Salario);

    printf("Digite o valor da prestacao do emprestimo: ");
    scanf("%f", &Prestacao);

    if (Prestacao > 0.2 * Salario) {
        printf("Emprestimo nao concedido");
    } else {
        printf("Emprestimo concedido");
    }

    return 0;
}