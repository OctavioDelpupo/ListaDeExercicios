#include <iostream>
using namespace std;

int main(){

    float tempF, tempC;

    cout << "Digite a tempetarua em graus Celsius: ";
    cin >> tempC;

    tempF = tempC * 1.8 + 32;

    cout << tempC << "graus Celsius equivalem a " << tempF << " graus Fahrenheit.";
}