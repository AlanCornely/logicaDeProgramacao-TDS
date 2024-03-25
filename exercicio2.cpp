#include <iostream>

int main (){
    int num1;
     printf("Digite o número: ");
    scanf("%d", &num1);
    int num2;
     printf("Digite o 2° número: ");
    scanf("%d", &num2);
    
    int soma = num1 + num2;

    printf("soma: %d + %d = %d\n", num1, num2, soma);

    return 0;
}