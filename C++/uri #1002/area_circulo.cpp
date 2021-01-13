#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    const double PI = 3.14159;
    double raio;
    double A;

    cin >> raio;
    cout << fixed << setprecision(4);
    A = PI*raio*raio;
    cout << "A=" << A << endl;

    return 0;
}