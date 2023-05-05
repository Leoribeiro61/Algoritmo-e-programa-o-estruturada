#include <stdio.h>

int main() {

    int n, i, anterior = 0, atual = 1, proximo;

    printf("Digite um numero inteiro maior ou igual a zero: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("O enesimo termo da sequencia de Fibonacci e 0.\n");
    } 
        else if (n == 1) {
            printf("O enesimo termo da sequencia de Fibonacci e 1.\n");
        } 
            else {
                for (i = 2; i <= n; i++) {
                proximo = anterior + atual;
                anterior = atual;
                atual = proximo;
            }

        printf("O enesimo termo da sequencia de Fibonacci e %d.\n", atual);
    }

    return 0;
}