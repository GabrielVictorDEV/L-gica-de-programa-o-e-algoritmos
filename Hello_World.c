#include <stdio.h>

int main()
{
   
    /*Escreva um software que receba um valor, e exiba ele ao cubo.*/
    puts("Hello World");
   
    int num = 0;
    int cubo = 0;
   
    printf("Digite um numero: ");
    scanf("%d", &num);
   
    cubo = num*num*num;
    printf("\nCubo de %d = %d\n", num, cubo);
   
    return 0;
   
    /* Escreva um software que receba 3 notas, e exiba a media aritimetica do usuario */
    float nota1 = 0;
    float nota2 = 0;
    float nota3 = 0;
    float media = 0;
    //float media1, media2, media3;
   
    printf("\nDigite a sua primeira nota: \n");
    scanf("%f",&nota1);
   
    printf("\nDigite a sua segunda nota: \n");
    scanf("%f",&nota2);
   
    printf("\nDigite a sua terceira nota: \n");
    scanf("%f",&nota3);
   
    media = (nota1+nota2+nota3)/3;
   
    printf("Sua media é: %.1f", media);
   
    return 0;
}
