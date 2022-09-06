#include <stdio.h>

int main(void) {
  /* Imprima de 1 até 100 com o laço de repetição for. 
  
  int i = 0;

  for(i = 1; i <= 100; i++){
    printf("%d \n", i);
  }

  Imprima de 100 até 1.  
  int a = 100;

  for(a = 100; a >= 1; a--){
    printf("%d \n", a);
  } 

  Imprima apenas os paredes de 0 até 100
  int b = 100;

  for(b = 0; b <= 100; b = b + 2){
    printf("%d \n", b);
  } */

  /* Faça um software que pergunte ao usuario quantas idades ele deseja impirmir e depois calcule a media delas
 
  int valores = 0;
  int idade = 0;
  float somaIdades = 0;
  
  printf("Quantas idades vc quer calcular? ");
  scanf("%d", &valores);

  for(idade = 1; idade <= valores ; idade++){
    int idades = 0;
    printf("\n Digite a sua %dº idade: \n", idade);
    scanf("%d", &idades);

    somaIdades = somaIdades + idades; 
  }

  float somaIdadesFinal = somaIdades / valores;
  printf("A media das suas idades é: %0.1f", somaIdadesFinal);
  */

  /* Receba 20 números e informe quantos deles estão no intervalo [10..35]
  int i = 0;
  int numeros = 0;
  int conta = 0;
  
  for(i = 1; i <= 20; i++){
    printf("Digite um número: ");
    scanf("%d", &numeros);
    
    if(numeros >= 10 && numeros <= 35){
      conta++;
    }
  } 

  printf("São %d que estão no intervalo entre 10 e 35", conta);
  */

  /*faça um software que pergunte quantos funcionarios tem na empresa, e depois receba o salario de cada um deles. Por fim, calcule a folha de pagamento mensal da empresa,

  int i = 0;
  int usuarios = 0;
  float salario = 0;
  float soma_salario = 0;
  int count = 0;

  printf("Quantos funcionarios tem na sua empresa? ");
  scanf("%d", &usuarios);

  for(i = 1; i <= usuarios; i++){
    printf("Digite o seu salario: ");
    scanf("%f", &salario);

    soma_salario = soma_salario + salario;
    if (salario >= 4000){
      count++;
    }
  }
  printf("A folha de pagamento é: %0.2f ", soma_salario);
  printf("Temos %d acima ou igual a R$4000", count);

   */

  /* Faça um software que pergunte quantos usuarios tem na empresa, depois receba o salario de cada um dos funcionarios:
  a - calcule a folha de pagamento mensal,
  b - Quantos são os salarios maiores ou igual a 4000;
  
  while(i <= 100){
    i++;
  }


  int i = 0;
  while(i <= 100){
    printf("\n %d \n", i);
    
    i++;
  }
  

  int i = 100;
  while(i >= 1){
    printf("\n %d \n", i);
    
    i--;
  }
  */
}
