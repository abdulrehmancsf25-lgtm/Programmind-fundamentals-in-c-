 /* 1 2 3    DRAW THE PATTERN 
    1 3 5
    1 4 7  
    1 5 9
 */
#include<iostream>
using namespace std ;
int main(){
          for (int i = 1 ;i <= 4 ; i++){
            int num = 1 ;
            
            for(int j = 1 ; j <= 3 ; j++ ){
                cout << num << " " ;
                num += i ;
            }
            cout << endl ;
          }


    return 0 ;
}