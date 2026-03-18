    //*                 Draw this paatern for random row value
	// *
	//  *
	//   *
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
	srand(time(0));
    int rows = rand() % 8 + 1 ;
    cout << "Rows : " << rows << endl ;
	for (int i = 0 ;  i < rows ; i++){
         for(int j = 1 ; j <= i ; j++){
            cout << " ";
         }
         cout <<"*" <<  endl ;
    }
	return 0;
}