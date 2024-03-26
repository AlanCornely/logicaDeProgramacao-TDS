#include <iostream>

int main (){
    int x1 = 5;
    int x2 = 7;
    int y1 = 6;
    int num1 = 15;
    int num2 = 20;
    int num3 = 7;
   


    printf("Exercícios sobre Operadores Lógicos e Matemáticos\n\n");
    printf("primeira\n");
    int resultado = ((x1 < 5) && x1 > 10);
    printf("resultado: %d\n\n", resultado);
    
    printf("segundo\n");
    resultado = (x2 == 10 || y1 < 8);
    printf("resultado: %d\n\n", resultado);
    
    printf("terceiro\n");
    int soma = num1 + num3;
    printf("soma: %d + %d = %d\n\n", num1, num2, soma);
 
    printf("quarto\n");
    int subtracao = num1 - num2;
    printf("subtração: %d + %d = %d\n\n", num1, num2, subtracao);

    printf("quinto\n");
    int subtracao = x1 * y1;
    printf("subtração: %d + %d = %d\n\n", num1, num2, subtracao);


return 0;
}