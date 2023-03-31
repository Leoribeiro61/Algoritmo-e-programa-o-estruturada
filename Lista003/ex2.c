/*2. Faça um programa que receba a idade de uma pessoa e se idade menor que 30 aparece a mensagem "Você é muito jovem". Caso idade maior que 30 anos, o programa não fará nada.  */

#include <stdio.h>

int main(){
    
    int idade;

    printf("Digite a sua idade: \n");
    scanf("%d", &idade);

    if (idade < 30){
        printf("Voce e muito jovem! \n");
    }

    return 0;
    
}