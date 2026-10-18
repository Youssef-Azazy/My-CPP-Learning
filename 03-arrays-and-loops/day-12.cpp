#include <iostream>
#include <iomanip>
#include <array>
#include <string.h>
using namespace std;

int main() {
    int nums_0[3]={300, 400, 500};
    int nums_1[3]={50 ,100 ,150};
    int num_2[3]={10, 20, 30};
    
    int numsv[3][3]={{300, 400, 500},{50 ,100 ,150},{10, 20, 30}};
    cout << numsv[0][0]<< endl;
    cout << numsv[1][2] << endl;

        //int nums[]={300, 400, 500, 600};    int nums[]={100, 200, 300, 400, 500, 600, 700};
     array <int, 7> nums={100, 200, 300, 400, 500, 600, 700};
    cout << "frist elment :" << nums[2] << endl;
    cout << sizeof (nums) << endl;
    cout << sizeof (int) << endl;
    cout << "location :" << &nums[0] << endl;
    cout << "location :" << &nums[1] << endl; 
    cout << "location :" << &nums[2] << endl;
    cout << "location :" << &nums[3] << endl;
    cout << "elements count :" << nums.size() << endl;
    cout << "frist elment :" << nums[0] << endl;
    cout << "second elment :" << nums[1] << endl;
    cout << "third elment :" << nums[2] << endl;
    cout << "last elment :" << nums[3] << endl;
    cout <<   nums.front() << endl;
    cout << "frist elment :" << nums.front()<< endl;
    cout << "second elment :" << nums.at(1) << endl;
    cout << "third elment :" << nums.at(2) << endl;
    cout << "last elment :" << nums.back() << endl;
    cout << "elements count :" << nums.size() << endl;
    cout << nums.empty() << endl;

    int numsize = sizeof(nums)/sizeof(nums[0]);
    int i=numsize-2;
    for( ;   ;){
        cout << nums[i] << endl;
         i--;  
         if ( i < 2 ) break;
    }
       char name_a[]= "youssef";
    cout << int(name_a[6]) << endl;
    cout << sizeof(name_a) << endl;

   char name_c[]= "elzero";
    cout << int(name_c[6]) << endl;
    cout << sizeof(name_c) << endl;
    
    cout << strcat (name_a, name_c) << endl;
    string name_v="mohamed";
    string name_f="azazy";

     cout << name_f.append(name_v) << endl;
       


   return 0; 
}