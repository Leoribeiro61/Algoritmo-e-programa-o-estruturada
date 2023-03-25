/* 1-Faça um programa em que o usuário digite o custo de uma determinada
mercadoria, em seguida, adiciona-se ao custo o valor do frete e 
despesas eventuais (também solicitadas pelo teclado).
Para concluir, o programa pergunta qual o valor de venda e indica 
a percentagem de lucro da mercadoria.
*/
#include <stdio.h>

int main() {
    float Custo_mercadoria;
    float Frete;
    float Despesas;
    float Valor_venda;
    float Custo_total;
    float Lucro;

    printf("Digite o custo da mercadoria: \n ");
    scanf("%f", &Custo_mercadoria);

    printf("Digite o valor do frete: \n ");
    scanf("%f", &Frete);

    printf("Digite o valor das despesas eventuais: \n ");
    scanf("%f", &Despesas);

    Custo_total = Custo_mercadoria + Frete + Despesas;

    printf("Digite o valor de venda da mercadoria: \n ");
    scanf("%f", &Valor_venda);

    Lucro = ((Valor_venda - Custo_total) / Custo_total) * 100;

    printf("O custo total da mercadoria é: R$ %.2f\n", Custo_total);
    printf("A porcentagem de lucro da mercadoria é de: %.2f%%\n", Lucro);

    return 0;
}