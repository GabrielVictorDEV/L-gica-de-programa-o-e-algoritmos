/*
Escreva um programa que receba do usuario o valor total da compra, e aplique um desconto segundo seu tipo de cliente 
VIP - 10%;
TOP - 20%;
DOTEIRO - 50%;
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	float valor = 0;
	int input = 0;	
	
	printf("Digite o valor total da sua compra: ");
	scanf("%f", &valor);	
	
	printf("Qual o seu tipo de cliente? Digite: 1- Cliente VIP, 2- Cliente TOP, 3- Cliente DOTEIRO");
	scanf("%d", &input);
	
	switch (input){
		case 1:{
			float desconto = (valor - (valor * 0.10)) * 1;
			printf("Obrigado por ser nosso cliente VIP, seu desconto foi de 10%! :) ");	
			printf("Valor com desconto: %2.f", desconto);
			break;
		}
		case 2:{
 	 		float desconto = (valor - (valor * 0.20)) * 1;
			printf("Obrigado por ser nosso cliente TOP, seu desconto foi de 10%! :) ");	
			printf("Valor com desconto: %2.f", desconto);
			break;
		}
		case 3:{
			float desconto = (valor - (valor * 0.50)) * 1;
			printf("Obrigado por ser nosso cliente DOTEIRO, seu desconto foi de 10%! :) ");	
			printf("Valor com desconto: %2.f", desconto);
			break;
		}
	}
	return 0;
}
