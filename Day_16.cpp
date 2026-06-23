#include <iostream>
#include <vector>
using namespace std;

void print (int a , int b){
    cout << "the first num is :" << a << endl ;
    cout << "the second num is :" << b << endl ;
}
void print(string a ,string b){
    cout << "the first name is :" << a << endl ;
    cout << "the second name is :" << b << endl ;
}

int main(){
    print(15 ,10);
    print("mohamed", "youssef");
    vector<string> nameone ={"youssef", "mohamed" ,"marwa" ,"saif"};
    vector<int> numone {10, 20 ,30 ,40};
    vector <int> age(3, 50);
   for (int i =0 ; i < numone.size() ; i++){
    nameone.at(3)="seleem";  
    cout << nameone.at(i) << endl ;
    cout << numone.at(i) << endl ;
    age.push_back(100);
    cout << age.at(i) <<endl;
}
    return 0;
}
/*Today, I finished five videos of Elzero Course in cpp .I also finished half unite it of English Course at AUC. */