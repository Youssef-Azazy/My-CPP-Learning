#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    cout<<fixed<<setprecision(20);
    bool status = true;
    string name = "youssef";
    float number = 10;
    double number2 = 10.123456789;
    float number3 = 10.1234567891f+5;
    char a = '65';
    auto x = 10;

    cout<<int (a) <<endl;
    cout<<sizeof (name)<<endl;
    cout<<sizeof(status)<<endl;
    cout<<sizeof (number)<<endl;
    cout<< number2 <<endl;
    cout<< number3/number<<"\nkv\r10" <<endl;
    cout<< INT_MAX <<endl;
    cout<< INT_MIN <<endl;
    cout <<sizeof (bool) <<endl;
    cout <<sizeof (int) <<endl;           
    cout <<sizeof (float)<<endl;                                              
    cout <<sizeof(double)<<endl;
    cout <<sizeof(long double)<<endl;
    cout << char(89) <<endl;
     return 0;
}
 
///*today,i finished module 2 level 5, i finished data types ,
//variables of course elzero c++ and 
//still three lesson of data types of course c++ iam going to take them tomorrow