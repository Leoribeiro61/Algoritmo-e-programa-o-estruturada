#include <stdio.h>

int main(){

    int a=0, b=0, c=0, d=0, diferenca;

    printf("Digite um valor para A: ");
    scanf("%d", &a);
    
    printf("Digite um valor para B: ");
    scanf("%d", &b);

    printf("Digite um valor para C: ");
    scanf("%d", &c);
     
    printf("Digite um valor para D: ");
    scanf("%d", &d);
    
    diferenca = a * b - c *d;

    printf("Diferenca = %d * %d - %d * %d \n", a, b, c, d);
    printf("Diferenca = %d", diferenca);

    return 0;
}