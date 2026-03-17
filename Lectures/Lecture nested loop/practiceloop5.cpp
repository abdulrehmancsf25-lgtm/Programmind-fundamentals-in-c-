/*5 4 3 2 1     DRAW THE PATTERN
  5 4 3 2   
  5 4 3     
5 4       
  5
*/
#include <iostream>
using namespace std;

int main(){
	for(int i = 0 ; i <=4 ;i++){
        for(int j = 5 ; j > i ; j--){
            cout << j << " " ;
        }
        cout << endl ;
    }
	return 0;
}