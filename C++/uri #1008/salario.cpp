#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    //leia o número de um funcionário, seu número de horas trabalhadas,
    //o valor que recebe por hora e calcula o salário desse funcionário
    //entradas ex: 25; 100; 5.50
    //saida ex: NUMBER = 25; SALARY = U$ 550.00

    int num, numh;
    float recv;

    cin >> num;
    cin >> numh;
    cin >> recv;

    float salary = recv*numh;

    cout << fixed << setprecision(2);
    cout << "NUMBER = " << num << endl;
    cout << "SALARY = U$ " << salary << endl;

    return 0;
}