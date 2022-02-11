#include <iostream>
#include <math.h>

using namespace std;

int main(){

    float area, lado, dobro;

    cout<<"Qual o tamanho do lado do quadrado: ";
    cin>>lado;
    
    area = pow(lado,2);
    dobro = area * 2;

    cout << "A area do quadrado e " << area << endl;
    cout << "E o drobro e " << dobro << endl;
}