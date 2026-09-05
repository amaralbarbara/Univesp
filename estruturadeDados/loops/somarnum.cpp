/*
 * Soma de 1 até um limite superior usando um loop while
 */
#include <iostream>
#include <windows.h> //biblioteca com formatacao utf8
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8); //formatacao utf8
    SetConsoleCP(CP_UTF8);

    int soma = 0, numero = 0; // Declara uma variável int soma para acumular os números e define a soma inicial como 0
    int limite;               // soma de 1 até este limite superior

    // Solicita ao usuário um limte  superior
    cout << "Digite o limite superior: ";
    cin >> limite; // Usa um loop para adicionar repetidamente 1, 2, 3,..., até upperbound int number = 1;
    while (numero <= limite)
    {
        soma = soma + numero; // acumula numero em soma
        ++numero;             // incrementa numero em 1
    }

    cout << "A soma de 1 até " << limite << " é " << soma << endl;
    return 0;
}
