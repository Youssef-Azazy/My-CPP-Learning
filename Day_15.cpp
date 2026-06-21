#include <iostream>
#include <algorithm>
using namespace std;

// int max_among_four_num(int a, int b, int c, int d);

// int main() {
//     int a, b ,c ,d;
//     cin >> a >> b >> c >> d;
//     int the_biggest = max_among_four_num(a , b ,c ,d) ;
//     cout << the_biggest << "\n";
//     return 0;
// }

//  int max_among_four_num(int a, int b, int c, int d){
// cout << "max_among_four_num is :\n";
// int max = a;

// if(b > max ) max = b;
// if(c > max ) max = c;
// if(d > max ) max = d;
// return max;
// }

// int main(){
//     cout << tolower('B') << endl;
//     cout << char( tolower('B') ) << endl;
//     string name = "E l \n\tZe Ro";
//     int namesize= size(name);
//     cout << namesize << endl;
//     for(int i=0 ; i <= namesize ; i++ ){
//         if ( isspace(name[i])){
//             continue;
//         }
//         if (isupper(name[i])){
//             cout << char(tolower(name[i]))  ;
//         }   
//        if (islower(name[i])){
//             cout << char(toupper(name[i])) ;
//         }
    
//         // cout << name[i] << endl;
  
//     }
//     return 0;
// }

// #include <iostream>
// #include <array>
// using namespace std;

// int main(){
//     int N = 4;                                        /*This is challenge on hackerranck*/
//     int A[N] ;                                  
//     int p;
//     int i ;
//     for ( i = 0; i < N ; i++ )
//     {
//     cin >> p ;
//     A[i] = p;}
//     for (i = N-1 ; i >= 0 ; i--){
//     cout << A[i] << " ";
//     }
//     return 0;
// }

int main() {
    // int a, b, c, d , e, f, g;
    // cin >> a >> b >> c >> d >> e >> f >> g;
    // // int max_of_twonum1= max(a , b) ;
    // // int max_of_twonum2= max(c , d) ; 
    // // int min_of_twonum1= min(a , b) ;
    // // int min_of_twonum2= min(c , d) ;
    // // cout << max(max_of_twonum1 , max_of_twonum2)<< endl ;
    // // cout << min(min_of_twonum1 , min_of_twonum2) << endl;
    // cout << max({a , b , c, d, e, f, g})<< endl;
    // cout << min({a , b , c, d, e, f, g})<< endl;
    int num[] = {10 ,100 ,20 , 30, 20 ,10 ,10 ,10};
    int numsize = size(num);
    int choosen=10;
    int counter =0;
    for (int i =0 ; i <= size(num) ; i++)
    if ( num[i] == choosen ) counter++;
    cout << choosen << " found " << counter << " times " << endl;
    return 0;
}
/*Today, I finished five videos of Elzero Web School C++ course and solved a challenge on HackerRank. 
I also finished half a unit of my English course at AUC, watched a BBC Learning English 'In One Minute' video, 
and did shadowing with one video.*/