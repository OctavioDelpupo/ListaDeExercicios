#include <iostream>
using namespace std;

int main(){
    
    float peso, multa, excesso;

    cout << "Digite peso do peixe: ";
    cin >> peso;

    if(peso > 50){
        excesso = peso - 50;
        multa = excesso * 4;
       
    }
    else
    {
        multa = 0;
        excesso = 0;
    }

    cout << "Excesso de peso é: " << excesso << " KG" << "\nMulta de: R$ " << multa << endl;
    
    
}