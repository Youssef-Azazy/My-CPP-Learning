// the program calculate the salary of employment in a month
#include <iostream>
using  namespace std;
// p is the price of hour, t is taxes.
// hp is the hours of part time, hf is the hours of full time. 
//wm is the work month.
//sp is the salary of part time,sf is the salary of full time.    
/*finished of day3 of learning programming c++ and also unit 4 level 4 ofthe EngliashCourse  */

int main() {
    double p = 21, t = .2*p, hp  = 4, hf =8, wm = 22, sp= (p-t)*hp*wm, sf = (p-t)*hf*wm;
    cout<<"------------------------------" << endl;
    cout << "salary to set of companies Global Finance Hub to trading paper currency " << endl;
    cout<<"------------------------------" << endl;
    cout << "salary youssef azazy is : " << sp  << "$" << "\n";
    cout << " salary ahmed ali is :" << sp *1.25 << "$" << "\n";
    cout << " salary mohmaed azazy Is :" << sp*(1+1.0/2.0)<<"$" << "\n";
    cout << " salary mohmaed ali is :" << sf<<"$" << "\n";
    return 0;
}