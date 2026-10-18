#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void game(int guessing_number , int secretnumber) {  
        if (secretnumber > guessing_number) {
            cout << " Too Low! " << endl;
        } 
        else if (secretnumber < guessing_number) {
            cout << " Too High! " << endl;
           } 
        if (secretnumber == guessing_number) {
        cout << "congratulations, you win " << endl;
        exit(0) ;  
        } 
        }  

int main() {
    srand(time(0));
    int secretnumber= (rand() % 100) +1;
    int guessing_number ;
    cout << "========================" << endl;
    cout << "Welcome to Guessing_Game" << endl; 
    cout << "========================" << endl;
    cout << " guess the number of 1 to 100 " << endl;
    int tries = 0;
    while ( tries < 5){ 
    cin >> guessing_number ;
    if ( guessing_number > 100  || guessing_number < 1){
        cout << "error: please, enter num from 1 to 100" << endl ;
        continue;
    }
    game(guessing_number , secretnumber); 
    if (tries < 2){
    cout << "try again\n";}
    tries++;
    }        

    cout << " =======you lost , good luck next time \n The number was:" << secretnumber << endl ;


    return 0;

}