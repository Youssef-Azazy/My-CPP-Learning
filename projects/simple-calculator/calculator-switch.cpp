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
   
    cout << "[1] is mult\n";
    cout << "[2] is sum\n";
    cout << "[3] is diff\n";
    cout << "[4] is div\n";

    switch (op)
    {
        case 1:
        cout << "\n a * b = " << mult << endl ;
        break;
        case 2:
        cout << "\n a + b ="  << sum << endl;
        break;
        case 3:
        cout << " \n a - b ="  << diff << endl;
        break;
        case 4:
        if (b !=0)
          cout << "\n a / b = " << a/b << endl ;
        else 
        cout << "error" << endl;
        break;
        default:
        cout <<  "error" << endl ;
        break;
    }

    return 0;
}