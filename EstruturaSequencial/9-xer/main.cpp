#include <iostream>

using namespace std;

int main(){
    float tempF, tempC;

    cout <<"Digite a temperatura em Fahrenheit: ";
    cin >> tempF;

    tempC = 5 * (tempF-32)/9;

    cout << "Temperatura em graus celsius " << tempC << endl;
}