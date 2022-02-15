#include <iostream>
using namespace std;

int main(){

       float h , pesoIdealH, pesoIdealM;

    cout << "Digite sua Altura: ";
    cin >> h;   

    pesoIdealH = (72.7 * h) - 58;
    pesoIdealM = (62.1*h) - 44.7;

    cout << "Peso ideal para homens: " << pesoIdealH << "\nPeso ideal para mulheres: " << pesoIdealM << endl;
}