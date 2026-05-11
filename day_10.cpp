#include <iostream>
using namespace std;

int main() {
    int age = 15;
    int points = 85;
    if (age >= 18) {
        cout << "You are an adult.\n" << endl;
    } else {
        cout << "You are a minor.\n" << endl;
        if (points >= 80) {
            cout << "You are a minor with good points.\n" << endl;
        } else {
            cout << "You are a minor with poor points.\n" << endl;
        }
    }


    string result =age >= 18 ? "You are an adult.\n   " : (points>=80 ? "You are a minor with good points.\n"
        : "You are a minor with poor points.\n");
    cout << result << endl;

    return 0;
}   
 
/*Today, I finished writing a C++ program that demonstrates the use of if-else statements and the ternary operator.
 The program checks a person's age and points to determine if they are an adult or a minor, and if they are a minor,
  it further checks their points to provide additional information. 
  I also included a more concise version using the ternary operator for better readability.
   Overall, it was a good exercise in understanding conditional statements in C++.
and I finished module 1 level 6 of  AUC English Course. */