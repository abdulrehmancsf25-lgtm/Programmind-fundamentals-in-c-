/* 1 2 3 4 5 SUM : 15
1 2 3 4   SUM : 10
1 2 3     SUM : 6 
1 2       SUM : 3 
1         SUM : 1
*/
#include <iostream>
using namespace std;

int main(){
	for (int i = 0 ; i < 5 ; i++){
		int sum = 0 ;
		for(int j = 1 ; i + j <= 5 ; j++){
			cout << j << " ";
			sum += j ;
		}
		for (int k = 0 ; k < i ; k++){
           cout << "  " ;
		}
		cout << "SUM : " << sum << endl ;
	}
	return 0;
}