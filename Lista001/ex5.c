/*5. Faça um algoritmo que leia a idade de uma pessoa expressa em anos,
meses e dias e escreva a idade dessa pessoa expressa apenas em dias. 
Considerar ano com 365 dias e mês com 30 dias.*/

#include <stdio.h>

int main() {
    int Anos, Meses, Dias, Idade_em_dias;

    printf("Digite a sua idade em anos: \n ");
    scanf("%d", &Anos);

    printf("Digite a sua idade em meses: \n ");
    scanf("%d", &Meses);

    printf("Digite a sua idade em dias: \n ");
    scanf("%d", &Dias);

    Idade_em_dias = Anos * 365 + Meses * 30 + Dias;

    printf("A sua idade em dias eh: %d\n", Idade_em_dias);

    return 0;
}