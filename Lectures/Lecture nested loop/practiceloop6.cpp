/* 1 2 3 4 5   DRAW THE PATTERN 
   1 2 3
   1 2
   1
*/
#include <iostream>
using namespace std;
int main(){
	    for (int i = 0 ; i <= 4 ;i++){
            for(int j = 5 ; j > i ; j--){
                cout << 5 - j +1 << " " ;
            }
            cout << endl ;
        }
	return 0;
}