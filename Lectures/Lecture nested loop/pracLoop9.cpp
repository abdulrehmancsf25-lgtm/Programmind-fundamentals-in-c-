#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
	  srand(time(0)) ;
      int cols = rand() % 9 + 1  ;
      cout << "Colums : " << cols << endl ;
      for (int i = 0 ; i < cols ; i++){
        for(int j = 1 ; i + j <= cols ; j++){
            cout << "*" ;
        }
        cout << endl ;
      }
	return 0;
}
