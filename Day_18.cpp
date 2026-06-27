#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // vector<int> nums = { 10, 20, 30, 40, 50 , 20 ,-20 ,50};
    // vector<int>::iterator it ;
    // for ( it = nums.begin() ; it < nums.end() ; it++ ) {
    //       cout << *it << endl ; 
    // }
    // cout << "==================\n" ;

    // for (int i : nums ) cout << i << endl;
    // cout << "==================\n" ;

    // int number[5] = {19 , 20 , 80 , 90 , 94} ;
    // for (int b : number ) cout << b << endl;
    // cout << "==================\n" ;

    // int val = 20;
    // int counttimes = count(nums.begin() , nums.end() , val);
    // cout << "number " << val << " found " << counttimes << " times" <<  endl ;   
    // cout << "==================\n" ;

    // for (int i : nums ) cout << i << endl;
    // cout << "==================\n" ;
 
    // sort( nums.begin() , nums.end() );
    // for (int i : nums ) cout << i << endl;
    // cout << "==================\n" ;

    // reverse( nums.begin() , nums.end() );
    // for (int i : nums ) cout << i << endl;
    // cout << "==================\n" ;
    // int num = 100;
    // int *ptr = &num;

    // cout << "value: " << num << endl;
    // cout << "addres: " << &num << endl ;
    // cout << "addres: " << ptr << endl ;  
    // cout << "value: " << *ptr << endl ;

    // *ptr = 200;  
    // cout << "value: " << num << endl;
    // cout << "addres: " << &num << endl ;
    // cout << "addres: " << ptr << endl ;  
    // cout << "value: " << *ptr << endl ;
    
    // short int nums[4] = {10 ,20 ,30 ,40 };
    // short int *ptr = &nums[0] ;

    // for (int i = 0 ; i < 4 ; i++ ){

    // cout << "value whis index: ";
    // cout << nums[i] << endl ;
    // cout << "value whis pionter: ";
    // cout << *(ptr+i) << endl; 
    // cout << "address whis index: ";
    // cout << &nums[i] << endl ;
    // cout << "address whis pionter: ";
    // cout << ptr+i << endl << endl;   
    // } 
     
    int *ptr1 ;
    int *ptr2 =NULL;
    int *ptr3 =nullptr; 
    cout << ptr1 << endl;
    cout << ptr2 << endl;
    cout << ptr3 << endl;

    int a = 100 ;
    void *ptr = &a ;
    cout << ptr << endl ;
    cout << *(int *)ptr << endl ;  
    cout << *static_cast <int *>(ptr) << endl ;
return 0;
}

/*Today, I finished Course Elzero CPP and Level 6 at AUC .
I did shadwing of two videos */