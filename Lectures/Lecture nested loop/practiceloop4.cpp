   /*5 4 3 2 1     DRAW THE PAATERN 
    6 5 4 3
    7 6 5
    8 7
    9*/
#include <iostream>
using namespace std;

int main(){
    /*
	for (int i = 1 ; i <= 5 ; i++){
        for(int j = 1; j <= 6 - i ; j++){
            cout << i - j + 5 << " " ;
        }
        cout << endl ;
    }
        */
       /*
       for( int i = 1 ; i <= 5 ; i++){
        for(int j = 5 ; j >= i ; j--){
            cout << i + j -1 << " " ;
        }
        cout << endl ;
       }
        */
       for (int i = 0 ; i < 5 ; i++){
        for(int j = 5 ; j > i ; j--){
            cout << i + j << " " ;
        }
        cout << endl ;
       }
	return 0;
}