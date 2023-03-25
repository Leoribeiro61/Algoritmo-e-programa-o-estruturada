/*6. Escreva um algoritmo para ler o salário mensal atual de um 
funcionário e o percentual de reajuste. Calcular e escrever o valor 
do novo salário.*/

#include <stdio.h>

int main() {
    float Salario_atual, Percentual_reajuste, Novo_salario;

    printf("Digite o salario mensal atual: \n");
    scanf("%f", &Salario_atual);

    printf("Digite o percentual de reajuste: \n");
    scanf("%f", &Percentual_reajuste);

    Novo_salario = Salario_atual * (1 + Percentual_reajuste/100);

    printf("O novo salario eh: %.2f\n", Novo_salario);

    return 0;
}


