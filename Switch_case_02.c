/*Escreva um programa, que receba um numero do usuario, e devolva o valor do mês relativo a ele.*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int input = 0;	
	
	printf("Digite um numero, e descubra seu mes respectivo -> ");
	scanf("%d", &input);	
	
	switch (input){
		case 1:{
			printf("A opcao escolhida foi: %d, o mes correspondente e Janeiro com 31 dias!", input);	
			break;
		}
		case 2:{
 	 		printf("A opcao escolhida foi: %d, o mes correspondente e Fevereiro com 28 dias!", input);			
			break;
		}
		case 3:{
			printf("A opcao escolhida foi: %d, o mes correspondente e Marco com 31 dias!", input);			
			break;
		}
		case 4:{
			printf("A opcao escolhida foi: %d, o mes correspondente e Abril com 31 dias!", input);			
			break;
		}
		case 5:{						
			printf("A opcao escolhida foi: %d, o mes correspondente e maio com 31 dias!", input);			
			break;
		}
		case 6:{						
			printf("A opcao escolhida foi: %d, o mes correspondente e junho com 30 dias!", input);			
			break;
		}
		case 7:{						
			printf("A opcao escolhida foi: %d, o mes correspondente e julho com 31 dias!", input);			
			break;
		}
		case 8:{						
			printf("A opcao escolhida foi: %d, o mes correspondente e Agosto com 31 dias!", input);			
			break;
		}
		case 9:{						
			printf("A opcao escolhida foi: %d, o mes correspondente e Setembro com 31 dias!", input);			
			break;
		}
		case 10:{						
			printf("A opcao escolhida foi: %d, o mes correspondente e Outubro com 31 dias!", input);			
			break;
		}
		case 11:{						
			printf("A opcao escolhida foi: %d, o mes correspondente e Novembro com 31 dias!", input);			
			break;
		}
		case 12:{						
			printf("A opcao escolhida foi: %d, o mes correspondente e Dezembro com 31 dias!", input);			
			break;
		}
	}
	return 0;
}


