#include <iostream>

int main (){
    int num1;
     printf("Digite o número: ");
    scanf("%d", &num1);
    int num2;
     printf("Digite o número: ");
    scanf("%d", &num2);
    
    int soma = num1 + num2;
    int subtracao = num1 - num2;
    int multiplicacao = num1 * num2;
    int divisao = num1 / num2;
    int resto = num1 % num2; // resto da divisão
 
    printf("soma: %d + %d = %d\n", num1, num2, soma);
    printf("subtração: %d - %d = %d\n", num1, num2, subtracao);
    printf("multiplicação: %d * %d = %d\n", num1, num2, multiplicacao);
    printf("divisão: %d / %d = %d (quociente), resto: %d\n", num1, num2, divisao, resto);

    return false;

}