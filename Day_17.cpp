#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {15 ,16 ,17 ,93, 99};
    // cout << nums.capacity() << endl; 
    // cout << nums.at(2) << endl ;  //this is more acurate
    // cout << nums[2] << endl ;
    // nums.push_back(199);
    // cout << nums.size() << endl;
    // cout << nums.at(5) << endl ;
    // nums.at(3)=60;
    // nums.push_back(199);
    // cout << nums.at(3) << endl;
    // nums.pop_back(); 
    // nums.push_back(199);
    // cout << nums.size() << endl;
    // cout << nums.max_size() << endl;
    // cout << nums.capacity() << endl; 
    // cout << nums.front() << endl;
    // cout << nums.back() << endl; 
    // cout << nums.back() << endl;
    // nums.clear();
    // cout << nums.size() << endl; 
    // if (nums.empty()){
    //     cout << "vector is empty";
    // }
    // else {
    //     cout << "vector is not empty";
    // }
    cout << nums.size() << endl;
    cout << *nums.begin() << endl ;
    vector <int>:: iterator it = nums.begin();
    auto ite = nums.begin() + 1;
      auto last = nums.end() -1;
    
    cout << *it << endl ;
    cout << it[1] << endl ;
    cout << it[2] << endl ;
    cout << *ite << endl ;
    nums.erase(it , nums.begin()+3);
    cout << *last<< endl ;
    cout << *(last-2)<< endl ;
    cout << nums.size() << endl;
    advance(it , 2);
    cout << *it << endl ;

    return 0;
}
/*Today, I finished four videos from Elzero's C++ course.
I finished half of a unit in my English course at AUC.
Moreover, I did shadowing with two videos.*/