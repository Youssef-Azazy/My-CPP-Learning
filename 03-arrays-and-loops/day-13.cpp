#include <iostream>
#include <array>
#include <iomanip>
using namespace std;

int main() {
   /* string products[] = {"Apple", "Banana", "Cherry" , "strawberry"};
    string sizes[] = { "small", "medium" , "large" , "x-large"};
    int i =0 ;
    for (; i < 4 ; i++){
       
        cout << "size name : " << endl;
        
        for (int j = 0 ; j < 4 ; j++){
            cout << sizes[j] ;
            if (j <=2){
                cout << ", ";
            }
        }
        cout << endl;
        cout << "======================" << endl;
    }
    while (i < (sizeof(products) / sizeof(products[0]))){ 
       cout << "productst name : " << products[i] << endl;
       cout << "size name : " << endl;
       i++;
       int j = 0;
      
       while (j < 4){
        cout << sizes[j] ;
        j++;
        if (j <3){
            cout << ", "; 
        }
        cout << endl;
    }
        cout << endl;
        cout << "======================" << endl;
        if (i == 4){
            break;
        }
    }
   int nums[ ] = {10 , 20 , -20 , 13 , 30 ,-30 ,40};
   int i = 0;
   int sum =0;
   cout << "Sum of positive even numbers: " << endl;
   for (; i < (sizeof(nums)/sizeof(nums[0])); i++){ 
   if (nums[i] %2 == 0 && nums[i] > 0) {
    sum = sum + nums[i];
   }
} 
   int nums[ ] = {10 , 20 , -20 , 13 , 30 ,-30 ,40};
   int i = 0;
   int sum =0;
   int numsize = size(nums);
   cout << "Sum of positive even numbers: " << endl;
   while (i < numsize){
    if (nums[i] %2 == 0 && nums[i] > 0) { 
     sum = sum + nums[i];
    } 
    i++;
    } 
 cout << sum << endl; 
    int guessnum = 7;
    int numtries = 0;
    int choice;

    while (numtries < 3) {
         cin >> choice;
    if ( choice == guessnum) {
        cout << "Congratulations! You guessed the number!" << endl;
        break;
   } 
   else {
    cout << "Wrong guess. Try again.\n" << endl;
     numtries++;  
    if (numtries == 3) {
    cout << "Sorry, you've used all your tries. The correct number was " << guessnum << "." << endl;
    } 
    }

   
}*/
int vlu[5];
int inp;
  for (int i = 0; i < 5; i++) {
    cin >> inp;
    vlu[i] = inp;
  }
  cout << "=======================" << endl;
   for (int i = 4; i >= 0; i--) {
    cout << vlu[i] << "\n";
  } 
  return 0;
}

/* Today, I learnt about nested for loops and while loops and do-while loops and 
how we can using those loops in three differnt practical applications,
I took half unit of English Course of American university
and I took two videos and I did shadwing with videos  */