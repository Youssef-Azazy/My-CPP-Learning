#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << fixed << setprecision(3);
    float a, b ;
    int op;
    cin >> a >> b >> op;
    float diff= a-b;
    float sum =a+b;
    double mult = a*b;
    double div =a/b;
    cout << "[1] is mult\n";
    cout << "[2] is sum\n";
    cout << "[3] is diff\n";
    cout << "[4] is div\n";


    if (op==1) cout << "\n a * b = " << mult << endl ;
    else if (op==2 ) cout << "\n a + b ="  << sum << endl;
    else if (op==3) cout << " \n a - b ="  << diff << endl;
    if (b != 0) {
    if (op==4)
        cout << "\n a / b = " << div << endl ;
    }

    else cout << "error";

    return 0;
}