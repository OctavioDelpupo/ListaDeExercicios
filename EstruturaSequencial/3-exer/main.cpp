#include <iostream>
using namespace std;

int main()
{

    setlocale(LC_ALL, "Portuguese");

    int num1, num2, soma;

    cout << "Digite o primeiro n�mero: ";
    cin >> num1;
    cout << "Digite o segundo n�mero: ";
    cin >> num2;

    soma = num1 + num2;

    cout << "A soma de " << num1 << " + " << num2 << " = " << soma;
}