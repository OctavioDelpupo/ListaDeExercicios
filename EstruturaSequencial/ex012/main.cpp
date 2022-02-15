#include <iostream>
using namespace std;

int main(){

    float altura , pesoIdeal;

    cout << "Digite sua Altura: ";
    cin >> altura;   

    pesoIdeal = (72.7 * altura) - 58;

    cout << "O peso ideal para voce e : " << pesoIdeal;
}