/*7. O custo de um carro novo ao consumidor é a soma do custo de 
fábrica com a porcentagem do distribuidor e dos impostos 
(aplicados ao custo de fábrica). Supondo que o percentual do 
distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo 
para ler o custo de fábrica de um carro, calcular e escrever o custo 
final ao consumidor.*/

#include <stdio.h>

int main() {
    float Custo_fab, Custo_consu;
    float Percentual_distri = 0.28;
    float Impostos = 0.45;

    printf("Digite o custo de fabrica do carro: \n ");
    scanf("%f", &Custo_fab);

    Custo_consu = Custo_fab + (Custo_fab * Percentual_distri) + (Custo_fab * Impostos);

    printf("O custo final ao consumidor eh de: R$%.2f \n", Custo_consu);

    return 0;
}
