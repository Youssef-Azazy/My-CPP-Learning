#include <iostream>
using namespace std;
/*void print(string msg ,string name , int age ) {
    cout << msg << " " << name << endl ;    
    cout << name << "'s age is: " << age << endl ;
}

int main() {
    print("Hi", "ahmed" , 25);
    print("Hello", "mohamed" , 30);
    print("welcome", "youssef" , 35 );
    return 0;   
}*/
void calc(float a , float b , float op){
    if (op == 1){
        cout << "the sumation is: " << " a + b = " << a + b << endl ;
}
else if (op ==2) {
    cout << " the subtractor is : " << " a - b = " << a - b << endl ;
}
else if (op==3) {
    cout << " the multiplication is: " << " a * b = " << a * b << endl ;
}
else if (op==4) {
    cout << " the division is: " << " a / b = " << a / b << endl ;
}
else {
    cout << "invalid operation" << endl ;
}
}
int main (){
    
    float a , b , op ;
    cout << "enter the first number: " ;
    cin >> a ;
    cout << "enter the second number: " ;
    cin >> b ;
    cout << "choose the operation:\n 1 for sumation\n, 2 for subtraction\n, 3 for multiplication\n, 4 for division\n" << endl ;
    cin >> op ;
    calc(a , b , op);
    cout << "choose the operation again:\n 1 for sumation\n 2 for subtraction\n 3 for   multiplication\n, 4 for division\n" << endl ; 
    cin >> op ;
    calc(a , b , op);   
    cout << "choose the operation again:\n 1 for sumation\n 2 for subtraction\n 3 for   multiplication\n 4 for division\n" << endl ; 
    cin >> op ;
    calc(a , b , op);   
    cout << "choose the operation again:\n 1 for sumation\n 2 for subtraction\n 3 for   multiplication\n 4 for division\n" << endl ; 
    cin >> op ;   
    calc(a , b , op);
    cout << "choose the operation again:\n 1 for sumation\n 2 for subtraction\n 3 for   multiplication\n 4 for division\n" << endl ; 
    cin >> op ;
    calc(a , b , op);
    return 0;
}
/*Today, I learned about functions and parameters in Elzero's C++ course.
 I also finished half of an AUC English lesson and did shadowing for two videos.  */