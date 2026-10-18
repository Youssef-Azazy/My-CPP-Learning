#include <iostream>
using namespace std;

int main() {
    // program to find even or odd
 int num;
 cin >> num;
 if (num % 2 == 0 ){
    cout << num << "  the number this is even" << endl;
 }
 else {
    cout << num << "  the number this is odd" << endl;
}

// program to find the max
    int a ,b ,c;
    cin >> a >> b >> c;
    int max = a;
    if (b > max)  max = b;
    if (c > max) max = c ;
    cout << endl << "max is :" << max << endl;
        
    
    return 0;
}

/*✅ Completed Unit 2, Level 6 of AUC English Course
✅ Finished 3 lessons from my C++ fundamentals course
✅ Built a Simple Calculator in C++ — two versions!
   • One using if-else statements
   • One using switch-case

Both versions include:
• All 4 basic operations
• Division by zero protection
• Clean menu system
• Float precision with setprecision*/