/*1. Faça um programa que calcule a média de 5 notas de um aluno. */

#include <stdio.h>

int main(){

    float nota1, nota2, nota3, nota4, nota5, media;

    printf("Digite a primeira nota do aluno: \n");
    scanf("%f", &nota1);
    printf("Digite a segunda nota do aluno: \n");
    scanf("%f", &nota2);
    printf("Digite a terceira nota do aluno: \n");
    scanf("%f", &nota3);
    printf("Digite a quarta nota do aluno: \n");
    scanf("%f", &nota4);
    printf("Digite a quinta nota do aluno: \n");
    scanf("%f", &nota5);

    media = (nota1 + nota2 + nota3 + nota4 + nota5) / 5;

    printf("A media do aluno e %.2f \n", media);

    return 0;

}
