#include <stdio.h>

int main(void) {
  int input = 0;

	printf("Digite um número, e escolha a opção desejada: ");
  printf("Digite a opcao desejada: 1- Calculadora, 2- Meses, 3- Desconto Cliente, 4- Categoria e 5- Sair ");

	scanf("%d", &input);
  
	switch (input){
		case 1:{
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
			break;
		}
    case 2:{
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
      
      break;
    }
    case 3:{
      float valor = 0;
	int input = 0;	
	
	printf("Digite o valor total da sua compra: ");
	scanf("%f", &valor);	
	
	printf("Qual o seu tipo de cliente? Digite: 1- Cliente VIP, 2- Cliente TOP, 3- Cliente DOTEIRO ");
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
      
      break;
    }
    case 4:{
      char input;	
	
	printf("Digite a letra de acordo com a sua categoria! ");
	printf("A- Infantil; B- Juvenil, C- Adulto, D- Master, E- Ja Morreu: ");
	scanf("%c", &input);	
	
	switch (input){
		case 'A':{
			printf("Obrigado por se inscrever, sua classificacao e: %c ", input);	
			break;
		}
		case 'a':{
			printf("Obrigado por se inscrever, sua classificacao e: %c ", input);	
			break;
		}
		case 'B':{
			printf("Obrigado por se inscrever, sua classificacao e: %c ", input);	
			break;
		}
		case 'b':{
			printf("Obrigado por se inscrever, sua classificacao e: %c ", input);	
			break;
		}
		case 'C':{
			printf("Obrigado por se inscrever, sua classificcao e: %c ", input);	
			break;
		}case 'c':{
			printf("Obrigado por se inscrever, sua classificacao e: %c ", input);	
			break;
		}
		case 'D':{
			printf("Obrigado por se inscrever, sua classificacao e: %c ", input);	
			break;
		}
		case 'd':{
			printf("Obrigado por se inscrever, sua classificacao e: %c ", input);	
			break;
		}
		case 'E':{
			printf("Obrigado por se inscrever, mas uma pena que vc ja morreu. ", input);	
			break;
		}
		case 'e':{
			printf("Obrigado por se inscrever, mas uma pena que vc ja morreu. ", input);	
			break;
		}
	}
      
      break;
    }
    case 5: {
      
      break;
    }
  }
  return 0;
}
