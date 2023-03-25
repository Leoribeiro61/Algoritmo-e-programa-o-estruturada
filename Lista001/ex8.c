/*8. Uma revendedora de carros usados paga a seus funcionários vendedores um salário fixo por mês, 
mais uma comissão também fixa para cada carro vendido e mais 5% do valor das vendas por ele efetuadas.
Escrever um algoritmo que leia o número de carros por ele vendidos, o valor total de suas vendas, 
o salário fixo e o valor que ele recebe por carro vendido. Calcule e escreva o salário final do 
vendedor.*/

#include <stdio.h>

int main() {
    int Carros_vendidos;
    float Valor_vendas, Salario_fixo, Valor_por_car, Salario_final;
    float Comissao_fixa = 500.0;

    printf("Digite o numero de carros vendidos: \n ");
    scanf("%d", &Carros_vendidos);

    printf("Digite o valor total das vendas: R$ \n");
    scanf("%f", &Valor_vendas);

    printf("Digite o salario fixo do vendedor: R$ \n");
    scanf("%f", &Salario_fixo);

    printf("Digite o valor que ele recebe por carro vendido: R$ \n");
    scanf("%f", &Valor_por_car);

    Salario_final = Salario_fixo + (Carros_vendidos * Valor_por_car) + (Comissao_fixa * Carros_vendidos) + (0.05 * Valor_vendas);

    printf("O salario final do vendedor é: R$%.2f \n", Salario_final);

    return 0;
}