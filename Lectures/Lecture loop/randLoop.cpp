/*#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std ;
int main(){
 srand(time(0)) ;
 int r =1 , c =1 , rows = rand() % (7 - 3 + 1) + 3 , cols = rand() % (7 - 3 + 1) + 3  ;
 cout << "Rows : " << rows << "  " << "Colums : " << cols << endl ;
 while(r <= rows){
    while(c <= cols){
        cout << "*" ;
        c++ ;
    }
    c  = 1 ;
    cout << endl ;
    r++ ;
 }

    return 0 ;
}*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
	srand(time(0));
	int r = 1, c = 1, rows = rand() %5  + 3, cols = rand() %5  + 3;
	cout << "Rows: " << rows << " Columns: " << cols << '\n';
	while (r <= rows){
		cout << '*';
		c++;
		if (c > cols){
			c = 1;
            cout << '\n';
			r++;
			
		}
	}	
	return 0;
}