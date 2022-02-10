#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int num1, num2, dobro, soma;
    float num3, cubo;

    cout << "Digite o primeiro numero inteiro: ";
    cin >> num1;
    cout << "Digite o segundo numero inteiro: ";
    cin >> num2;
    cout << "Digite o terceiro numero real: ";
    cin >> num3;

    dobro = ((num1 * 2) * (num2 / 2));
    cout << "O produto do dobro do primeiro com metade do segundo: " << dobro << endl;
    soma = ((num1 * 3) + num3);
    cout << "A soma do triplo do primeiro com o terceiro: " << soma << endl;
    cubo = pow(num3, 3);
    cout << "O terceiro elevado ao cubo: " << cubo << endl;
}