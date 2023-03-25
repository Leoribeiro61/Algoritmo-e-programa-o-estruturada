/*3. Faça um programa que calcule a quantidade necessária de latas de 
tinta para pintar uma parede. O programa pergunta as medidas de largura
e altura da parede em metros e escreve quantas latas de tinta serão 
necessárias para pintá-la. Considere que o consumo de tinta é de 300 ml
por metro quadrado e a quantidade de tinta por lata é de 2 litros.*/

#include <stdio.h>
#include <math.h>

//#define Consumo_tinta 0.3 // consumo de tinta por metro quadrado em litros
//#define Tamanho_lata 2.0 // tamanho de uma lata de tinta em litros

int main() {
    float Largura;
    float Altura;
    float Area; 
    float Qtd_tinta;
    float Qtd_latas;
    float Consumo_tinta = 0.3;
    float Tamanho_lata = 2.0;

    printf("Digite a largura da parede em metros: ");
    scanf("%f", &Largura);

    printf("Digite a altura da parede em metros: ");
    scanf("%f", &Altura);

    Area = Largura * Altura; // Calculando a área da parede em metros quadrados

    Qtd_tinta = Area * Consumo_tinta; // Calculando a quantidade de tinta necessária em litros

    Qtd_latas =  ceil(Qtd_tinta / Tamanho_lata); // Calculando a quantidade de latas de tinta necessárias, arredondando para cima

    printf("Serao necessarias %.0f latas de tinta para pintar a parede. \n", Qtd_latas);

    return 0;
}