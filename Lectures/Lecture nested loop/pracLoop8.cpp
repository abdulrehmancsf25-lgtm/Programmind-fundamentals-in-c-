 /*     *                 DRAW PATTERN ACCORDING TO INPUT VALUE 
      * * *               THIS ONE IS FOR NUM VALUE 4 
    * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
*/
#include <iostream>
using namespace std;

int main(){
	  int n ;
      cout << "Enter the value " ;
      cin >> n ;
     for (int i = 0 ; i < n ; i++){
        for(int j = 1 ; i+ j <= n ; j++){
            cout << "  "  ;
        }
        for(int k = 0 ; k < i ; k++){
            cout << "* " ;
        }
       
        for(int j = 0 ; j <= i ; j++){
            cout << "* ";
        }

         cout << endl ;
         
    }
      // PORTION REMAIN
for(int i = 1 ; i <= n- 1 ; i++){
   for(int j = 0 ; j<= i ; j++){
    cout << "  " ; 
   }
   for (int j = 0 ; i +j <= n -2  ; j++){
    cout << "* " ;
   }
   for (int j = 0 ; i +j <= n -1  ; j++){
    cout << "* " ;
   }
       cout << endl ;

}

	return 0;
}