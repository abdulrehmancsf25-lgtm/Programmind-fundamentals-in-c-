#include <iostream>
using namespace std;

int main(){
	   for(int i = 1 ; i <=5 ; i++){
      for (int j = 1 ; j <= 10 ; j++){
        if (i * j < 10) 
        cout << "0" << i*j << " ";
        else
         cout << i * j << " ";
      }
         cout << endl ;

       }
	return 0;
}