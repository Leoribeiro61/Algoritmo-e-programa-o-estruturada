/*9. Faça um algoritmo que leia três notas de um aluno, calcule e escreva a média final deste aluno.
Considerar que a média é ponderada e que o peso das notas é 2, 3 e 5. 
Fórmula para o cálculo da média final é:

((n1*2)+(n2*3)+(n3*5))/2+3+5*/

#include <stdio.h>

int main() {
    float n1, n2, n3, media_final;

    printf("Digite a primeira nota: \n ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: \n ");
    scanf("%f", &n2);

    printf("Digite a terceira nota: \n ");
    scanf("%f", &n3);

    media_final = ((n1 * 2) + (n2 * 3) + (n3 * 5)) / (2 + 3 + 5);

    printf("A media final do aluno e: %.2f\n", media_final);

    return 0;
}