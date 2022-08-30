/*
Escreva um programa que lê sua classificatoria a partir da entrada de uma letra.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
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
	return 0;
}
