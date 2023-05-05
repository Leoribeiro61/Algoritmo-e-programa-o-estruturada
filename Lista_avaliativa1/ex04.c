/*4. Leia 2 valores com uma casa decimal (x e y), que devem representar as coordenadas
de um ponto em um plano. A seguir, determine qual o quadrante ao qual pertence o ponto, ou
se está sobre um dos eixos cartesianos ou na origem (x = y = 0). Se o ponto estiver na origem,
escreva a mensagem “Origem”. Se o ponto estiver sobre um dos eixos escreva “Eixo X” ou
“Eixo Y”, conforme for a situação.*/

#include <stdio.h>

int main(){

    float valorX, valorY;

    printf("Digite o valor de X: ");
    scanf("%f", &valorX);
    printf("Digite o valor de Y: ");
    scanf("%f", &valorY);

    
    if (valorX > 0 && valorY > 0){
        printf("1o Quadrante \n");
        return 0;
        }   
        else if (valorX < 0 && valorY > 0){
            printf("2o Quadrante \n");
            return 0;
        }
            else if (valorX < 0 && valorY < 0){
                printf("3o Quadrante \n");
                return 0;
            }
                else if (valorX > 0 && valorY < 0){
                    printf("4o Quadrante \n");
                    return 0;
                } 
                    else printf("Origem!");
    return 0;
}