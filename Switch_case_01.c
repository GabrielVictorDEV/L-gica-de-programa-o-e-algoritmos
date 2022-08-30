/*Faça um switch case, que receba valores e execute as operações.*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int input = 0;
	int num, num2;
	
	printf("Digite dois valores, e escolha a opcao desejada: ");
	scanf("%d", &num);
	scanf("%d", &num2);	
	
	printf("Digite a opcao desejada: 1- Somar, 2- Subtrair, 3- Multiplicar, 4- Dividir e 5- Sair ");
	scanf("%d", &input);	
	
	switch (input){
		case 1:{
			int calculo;			
			calculo = num + num2;
			printf("O resultado do seu calculo e: %d", calculo);
			
			break;
		}
		case 2:{
			int calculo;
			calculo = num + num2;
			printf("O resultado do seu calculo e: %d", calculo);
			
			break;
		}
		case 3:{
			int calculo;
			calculo = num + num2;
			printf("O resultado do seu calculo e: %d", calculo);
			
			break;
		}
		case 4:{
			int calculo;
			calculo = num + num2;
			printf("O resultado do seu calculo e: %d", calculo);
			
			break;
		}
		case 5:{
			break;
		}
	}
	return 0;
}
