#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << 10+10 << endl;
    cout << sizeof (int) << endl;
    cout << sizeof (10+10) << endl;
    cout << sizeof (10.0) << endl;
    cout << 10.5f + 9.25f << endl;
    cout << sizeof (10.5f + 9.25f) << endl;
    double a=10.5 ;
    int b=(int)(a);
    cout << a << endl;
    cout << b << endl;
    double c=10.5;
    int d;
    d=c;
    cout << c << endl;
    cout << d << endl;
    cout <<sizeof (10.5-3.5) << endl;
    cout << 10.0/3.0f<< endl;
    cout << int(20.5) % 5 << endl;
    int f = 10; 
     f %= 3;
    cout << f << endl;
    f /=5;
    cout << f << endl;
    int h =0;
    cout << h++ << endl;
    cout << h << endl;
        int i =0;   
    cout << ++i << endl;
    cout << i << endl;  
    int j = 0;
    cout << j-- << endl;    
    cout << j << endl;
    int k = 0;          
    cout << --k << endl;
    cout << k << endl;

    return 0;
}
/*today, i finished unit 4 level 5 of english course AUC and finished 3 lesson of course elzero c++*/
