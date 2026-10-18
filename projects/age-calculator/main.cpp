#include <iostream>
#include <iomanip>
using namespace std;

/*age is a variable,age of months is am, age of weeks is aw,
age of days is ad,age of hours is ah
age of minutes is amn, age of sacend is as*/

int main() {
    cout <<fixed<<
    setprecision(2);
    cout<< "==========================================\n";
    cout<< "        Welcome to Age Calculator         \n";
    cout<< "==========================================\n";

    int a;
    cin>>a;
    int am = a * 12;
    int aw = am * 4;
    double ad = am * 3;
    double ah = ad * 24;
    double amn = ah * 60;  
    double as = amn * 60;

    cout  << "age is : " << a << " years" << endl;
    cout  << am<<"  month" << endl;
    cout  << aw << " weeks" << endl;
    cout  << ad << " days" << endl;
    cout  << ah << " hours" << endl;
    cout  << amn << " minutes" << endl;
    cout  << as << " seconds" << endl;

    cout<< "==========================================\n"; // end of the program
    return 0;
}

/*Today is Day 4,i finished 3 lesson of course elzero of the programming by c++
and finished module 5 level 4 of the english course AUC*/


