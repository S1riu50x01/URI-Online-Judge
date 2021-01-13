#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    //A tem peso 2, a nota B tem peso 3 e a nota C tem peso 5
    //saida ex: MEDIA = 6.3
    cout << fixed << setprecision(1);

    float A;
    float B;
    float C;
    float media;

    cin >> A;
    cin >> B;
    cin >> C;

    media = (A*2 + B*3 + C*5)/10;

    cout << "MEDIA = " << media << endl;
    
    return 0;
}