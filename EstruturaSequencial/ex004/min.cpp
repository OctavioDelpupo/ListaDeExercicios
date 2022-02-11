#include <iostream>

using namespace std;

int main()
{
    float nota1, nota2, nota3, nota4, soma;

    cout << "Digite a primeira nota: ";
    cin >> nota1;

    cout << "Digite a segunda nota: ";
    cin >> nota2;

    cout << "Digite a terceira nota: ";
    cin >> nota3;

    cout << "Digite a quarta nota: ";
    cin >> nota4;

    soma = (nota1+nota2+nota3+nota4) / 4;

    cout << "A media do aluno é: "<< soma << endl;
}