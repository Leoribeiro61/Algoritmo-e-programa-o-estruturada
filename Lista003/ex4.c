/*4. Elabore um programa para verificação de situação eleitoral, onde será informada somente a idade do eleitor, considere as situações abaixo:

Menor que 0 não nasceu
0-15 não vota
16-17 opcional
18-65 obrigatório
exatamente 41- somente ganha prêmio e não vota!!!
> 65 opcional
exatamente 88 - somente ganha prêmio e não vota!!!

- Não utilizar os operadores lógicos || ou &&
- Utilizar somente estrutura if/else conforme apresentada abaixo
- Não utilizar switch/case
- Não utilizar a estrutura "else if"

*/

#include <stdio.h>

int main() {
	
	int idade = 0;
    
	printf("----------------------- \n");
	printf("  SITUACAO     ELEITORAL \n");
	printf("----------------------- \n");
	
	printf("  Informe a sua idade: \n ");
	scanf("%d",&idade);
	
	
	
	if(idade < 0){
		printf("ainda nao nasceu \n");
	}else{
		if(idade < 16){
			printf("Voce ainda nao pode votar \n");
		}else{
			if(idade < 18){
				printf("Seu voto e opcional \n");
			}else{
				if(idade < 66){
					if(idade == 41){
						printf("Voce ganhou um premio, mas nao pode votar \n");
					}else{
						printf("Seu voto e obrigatorio \n");
					}
				}else{
					if(idade == 88){
						printf("Voce ganhou um premio, mas nao pode votar \n");
					}else{
						printf("Seu voto e opcional \n");
					}
				}
			}
		}
	}
		
	return 0;
}