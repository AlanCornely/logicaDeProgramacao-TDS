#include <iostream>

int main () {
    char nome[50];
    int idade;
    printf("Digite o  seu nome: ");
    std::cin.getline(nome, 50);
    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    printf("olá %s, sua idade é %d\n", nome, idade);
}
