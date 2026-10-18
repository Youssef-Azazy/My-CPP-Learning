#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    cout << fixed << setprecision(10);
    bool statue = true;
    string name = "youssef";
    float number =10;
    double number2 = 10.123456789;
    float number3 = 10.1234567891f+5;
    char a ='68';
    auto x = a;
    bool d = 10;
    bool c = 0;
    bool b =10 >5;
    signed f= 100 ;
    unsigned s = 1000;
    using mohamed = long long;
    mohamed o=1010101010101001;
    typedef double UL;
    UL l = 10000000000000000;
    int g ;
    double h =1772.5;
    g=h;
    char k = 'C';
    int r = 100;

    cout << r+k << endl;
    cout << int(k) << endl;
    cout << g << endl;
    cout << l << endl;
    cout << o << endl;
    cout << s << endl;
    cout << f << endl;
    cout << sizeof (short) << endl; 
    cout << sizeof (long) << endl;  
    cout << sizeof (long long) << endl; 
    cout << d << endl;
    cout << c << endl;          
    cout << true +true + false + false << endl;
    cout << b << endl;  
    cout << statue << endl; 
    cout << int (a) << endl; 
    cout << sizeof (x) << endl;
    cout << sizeof (name) << endl;
    cout << sizeof (statue) << endl;
    cout << sizeof (number) << endl;
    cout << number2 << endl;
    cout << number3/number << "\nkv\r10" << endl;
    cout << INT_MAX << endl;    
    cout << INT_MIN << endl;
    cout << sizeof (bool) << endl;
    cout << sizeof (int) << endl;   
    cout<< sizeof (float) << endl;
    cout << sizeof (double) << endl;        
    cout <<sizeof (string) << endl;
    cout << char(80) << endl;       

    return 0;               
}
/*Finished AUC English (Unit 3, Level 5), watched 3 C++ tutorials by Elzero,
 and solved 3 HackerRank challenges on Basic Data Types."*/