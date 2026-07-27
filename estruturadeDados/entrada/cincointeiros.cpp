/*
 * Program called FiveIntegerArithmetic.cpp to prompt user for 5 integers, with 5 "cin >>" statements, and print their sum and product. Use five int variables integer1 to integer5 to store the five integers.
 */

#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    int int1;
    int int2;
    int int3;
    int int4;
    int int5;

    int soma, produto;

    cout << "Digite o primeiro número inteiro: "; // Exibe uma mensagem de solicitação
    cin >> int1;

    cout << "Digite o segundo número inteiro: "; // Exibe uma mensagem de solicitação
    cin >> int2;

    cout << "Digite o terceiro número inteiro: "; // Exibe uma mensagem de solicitação
    cin >> int3;

    cout << "Digite o quarto número inteiro: "; // Exibe uma mensagem de solicitação
    cin >> int4;

    cout << "Digite o quinto número inteiro: "; // Exibe uma mensagem de solicitação
    cin >> int5;

    soma = int1 + int2 + int3 + int4 + int5;
    produto = int1 * int2 * int3 * int4 * int5;

    cout << "A soma é: " << soma << endl;
    cout << "O produto é: " << produto << endl;

    return 0;
}