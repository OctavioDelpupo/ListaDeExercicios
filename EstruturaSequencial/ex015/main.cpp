#include <iostream>

using namespace std;

int main(){

   int qtHoras, qtHorasMes, salarioMes, ir, inss, sindicato, salarioLiquido;
   
   cout <<  "Quantos voce ganha por hora: ";
   cin >> qtHoras;
   cout << "Horas trabalhada mes: ";
   cin >> qtHorasMes;

   salarioMes = qtHoras * qtHorasMes;
   ir = salarioMes * 0.11;
   inss = salarioMes * 0.08;
   sindicato = salarioMes * 0.05;
   salarioLiquido = salarioMes - (ir + inss + sindicato);

   cout << "+ Salario Bruto: R$ " << salarioMes << endl;   
   cout << "- IR (11%): R$ " << ir << endl;   
   cout << "- INSS (8%) R$ " << inss << endl;   
   cout << "- Sindicato: R$ " << sindicato << endl;   
   cout << "= Salario Liquuido: R$ " << salarioLiquido << endl;   
   
}