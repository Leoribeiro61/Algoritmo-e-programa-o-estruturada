/*4. Elabore um programa para verificação de situação eleitoral, onde será informada somente a idade do eleitor, considere as situações abaixo:

Menor que 0 não nasceu
0-15 não vota
16-17 opcional
18-65 obrigatório
exatamente 41- somente ganha prêmio e não vota!!!
> 65 opcional
exatamente 88 - somente ganha prêmio e não vota!!!*/


#include <stdio.h>

int main() {
   int idade;

   printf("Digite a sua idade: ");
   scanf("%d", &idade);

   if (idade < 0) {
    printf("Voce ainda nao nasceu.\n");
    }

        if (idade >= 0 && idade <= 15) {
        printf("Voce ainda nao pode votar.\n");
        }

            if (idade >= 16 && idade <= 17) {
            printf("Seu voto e opcional.\n");
            }

                if (idade >= 18 && idade <= 65) {
                printf("Seu voto e obrigatorio.\n");
                }

                    if (idade == 41) {
                    printf("Voce ganhou um premio, mas nao pode votar.\n");
                    }

                        if (idade > 65 && idade != 88) {
                        printf("Seu voto e opcional.\n");
                        }

                            if (idade == 88) {
                            printf("Voce ganhou um premio, mas nao pode votar.\n");
                            }

   return 0;
}