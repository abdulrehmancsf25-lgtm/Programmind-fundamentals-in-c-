/*  MAKE THE PATTERN 
5 4 3 2 1 
6 5 4 3 2 
7 6 5 4 3 
8 7 6 5 4 
9 8 7 6 5
*/
#include <iostream>
using namespace std;

int main(){
	for(int i = 1 ; i <= 5 ; i++){
        for(int j = 1 ; j <= 5 ; j++){
            cout << i-j +5 << " ";
        }
        cout << endl; 
    }
	
	return 0;
}