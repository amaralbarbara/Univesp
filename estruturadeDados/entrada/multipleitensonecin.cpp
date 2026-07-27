/*
 * Reading multiple items in one cin statement
 * We could read more than one values in one cin statement
 */
#include <iostream>
using namespace std;
int firstInt;
int secondInt;
int sum;
int main()
{
    cout << "Insira dois números inteiros (separados por espaço): ";
    cin >> firstInt >> secondInt;
    sum = firstInt + secondInt;
    cout << "The sum is: " << sum << endl;
    return 0;
}
