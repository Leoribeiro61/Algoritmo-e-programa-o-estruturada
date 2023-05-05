#include <stdio.h>

int main(){

    int num_fruta, quantidade;
    int somaMaca = 0, somaAbacaxi = 0, somaPera = 0; 
    char cont;

    do{
    printf("1 => ABACAXI - 5,00 a unidade \n");
    printf("2 => MACA - 1,00 a unidade \n");
    printf("3 => PERA - 4,00 a unidade \n");
    printf("Digite o numero da fruta que deseja comprar: ");
    scanf("%d", &num_fruta);

    if (num_fruta == 1){
        printf("Digite a quantidade de abacaxi que deseja: ");
        scanf("%d", &quantidade);
        somaAbacaxi += quantidade * 5;
        }
        else if (num_fruta == 2){
            printf("Digite a quantidade de maca que deseja: ");
            scanf("%d", &quantidade);
            somaMaca += quantidade * 1;
            }
            else if (num_fruta == 3){
                printf("Digite a quantidade de pera que deseja: ");
                scanf("%d", &quantidade);
                somaPera += quantidade * 4;
                } else printf("Numero invalido \n");
    

    printf("Deseja continuar comprando? (s/n)");
    scanf("%s", &cont);

    } while (cont == 's' || cont == 'S');

    printf("Valor total da compra: R$%d reais \n", somaAbacaxi + somaMaca + somaPera);
    
    return 0;

}