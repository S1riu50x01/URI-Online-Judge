#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    //leia o nome de um vendedor, o seu salário fixo e o total de 
    //vendas efetuadas por ele no mês (em dinheiro).
    //comissão: 15%
    //ex entrada: JOAO; 500.00; 1230.30
    //ex saida: TOTAL = R$ 684.54
    string name;
    double salario, vendas, total;

    cin >> name;
    cin >> salario;
    cin >> vendas;

    cout << fixed << setprecision(2);
    
    total = salario + vendas*15/100;

    cout << "TOTAL = R$ "<< total << endl;

    return 0;
}