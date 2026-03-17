#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
	//srand(time(0));
	int i, j;
	for (i = 0 ; i <= 4 ; i++){
		for (j = 1 ; j + i <= 5 ; j++)
			cout << j << ' ';
		cout << '\n';
	}
	return 0;
}