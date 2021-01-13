#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    //peso A = 3.5
    //peso B = 7.5
    //soma pesos = 11
    //saida: MEDIA = 6.43182
    cout << fixed << setprecision(5);

    double A;
    double B;
    cin >> A;
    cin >> B;

    double media = (A*3.5 + B*7.5)/11;

    cout << "MEDIA = " << media << endl;

    return 0;
}