#include <iostream>

using namespace std;


// string stringrepeat (string st , int count = 4  , string s = ","  , bool showend = true ){
//     string result;
//     int i = 0;
//     for (  ; i < count ; i++){ 
//         result +=st;
//         if (  i < count - 1)
//         result +=s; 
//      }
//      while ( i < count ) { 
//         i++;
//         result +=st;
//         if ( i < count )   result +=s; 
//       }
//     return result;
// }
// int main() {

//     cout << stringrepeat( " youssef")<< endl ;
//     return 0;
// }

string zfill(string st , int width = 7 , string fill = "0"){
    int len = st.length(); 
    if (len < width){
    for ( int i =0 ; i < width - len ; i++){
    st = fill + st;
    }}
    return st;
}
int main(){
   cout <<  zfill("6500" ) << endl ;
   cout <<  zfill("17090" ) << endl; 
   cout <<  zfill("449200" ) << endl ;
   cout <<  zfill("1730090" ) << endl;
    return 0;
}

/*Today, I finished half unit enlgish of Course AUC ,And i did shadwing to Two videos.
 I elso solved two question of new Course Elzero */