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

    cout << "Digite os números inteiros:  (separados por espaço): "; // Exibe uma mensagem de solicitação
    cin >> int1 >> int2 >> int3 >> int4 >> int5;

    soma = int1 + int2 + int3 + int4 + int5;
    produto = int1 * int2 * int3 * int4 * int5;

    cout << "A soma é: " << soma << endl;
    cout << "O produto é: " << produto << endl;

    return 0;
}