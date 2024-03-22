#include <iostream>

int main() {

    // Declara e inicializa variaveis
    int numero = 10;
    float pi = 3.14159;
    char letra = 'A';
    std::string nome = "Ana";
    bool isTrue = true;

    // usa printf para formatar e imprimir valores de variaveis
    printf ("numero: %d\n", numero);
    printf ("pi:%.2f\n", pi);
    printf ("letra: %c\n", letra);
    printf ("nome: %s\n", nome.c_str());
    printf ("isTrue: %d\n", isTrue);

    // return 0 ou false para finalizar o algoritmo
    return 0;
}