#include <stdio.h> 
#include <math.h>

#define PI 3.14159

int main(){

    float raio, volume, area;

    printf("Digite o raio: ");
    scanf("%f", &raio);

    volume = (4/3.0) * PI * pow(raio, 3);
    area = 4 * PI * pow(raio, 2);

    printf("O volume e de = %.2f\n", volume);
    printf("A area e de = %.2f\n", area);

    return 0;
}