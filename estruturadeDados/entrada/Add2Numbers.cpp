/*
 * Solicita ao usuário dois números inteiros e imprime sua soma, diferença, produto e quociente
 * (IntegerArithmetic.cpp)
 */
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int firtsInt;                                 // Declara uma variável chamada firsrInt do tipo int (inteiro)
    int secondInt;                                // Declara uma variável chamada secondInt do tipo int
    int sum, difference, product, quotient;       // Declara 4 variáveis ​​do tipo int para armazenar os resultados
    cout << "Digite o primeiro número inteiro: "; // Exibe uma mensagem de solicitação
    cin >> firtsInt;                              // Lê a entrada do teclado (cin) para firstInt
    cout << "Digite o segundo número inteiro: ";  // Exibe uma mensagem de solicitação
    cin >> secondInt;
    secondInt; // Lê a entrada para secondInt // Realiza operações aritméticas
    sum = firtsInt + secondInt;
    difference = firtsInt - secondInt;
    product = firtsInt * secondInt;
    quotient = firtsInt / secondInt; // Imprime os resultados
    cout << "A soma é: " << sum << endl;
    cout << "A diferença é: " << difference << endl;
    cout << "O produto é: " << product << endl;
    cout << "O quociente é " << quotient << endl;
    return 0;
}