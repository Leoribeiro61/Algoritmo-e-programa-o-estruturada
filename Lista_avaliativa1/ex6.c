#include <stdio.h>

int main(){

    int i, soma = 0;

    for(int i = 0; i < 1000; i++){

        if(i % 3 == 0 || i % 5 == 0){
            soma += i;
        }
    }

    printf("A soma dos numeros multiplos de 3 ou 5 abaixo de 1000 e %d\n", soma);

    return 0;
} 

