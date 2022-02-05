#include <iostream>
using namespace std;

int main(){

    float valorHoraTrabalhada, qtHorasTrabalhadaMes, salario;

    cout << "Qual o valor da sua hora trabalhada: ";
    cin >> valorHoraTrabalhada;
    cout << "Quantidade de horas trabalhada no mes: ";
    cin >> qtHorasTrabalhadaMes;

    salario = valorHoraTrabalhada * qtHorasTrabalhadaMes;

    cout << "Valor salario mes R$ " << salario << endl;
}