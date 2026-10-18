#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "==========================================\n";
    cout << "        Welcome to Bit Converter           \n";        
    cout << "==========================================\n";
cout << fixed << setprecision(30);
int bit;
cin>>bit;
double byte=bit/8;
double kb=byte/1024;
double mb=kb/1024;
double gb=mb/1024;  
double tb=gb/1024;

cout<<"bit is : "<<bit<<" bits"<<endl;
cout<<"byte is : "<<byte<<" bytes"<<endl; 
cout<<"kb is : "<<kb<<" KB"<<endl;
cout<<"mb is : "<<mb<<" MB"<<endl; 
cout<<"gb is : "<<gb<<" GB"<<endl;
cout<<"tb is : "<<tb<<" TB"<<endl; 
return 0;
}

/*Today is Day 4,i finished 3 lesson of course elzero of the programming by c++
and finished  level 5 module1 and yesterday finished level 4 of course english of AUC*/
