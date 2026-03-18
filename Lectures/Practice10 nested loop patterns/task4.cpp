 /*
        A           DRAW THE PATTERN 
      A B
    A B C
  A B C D
A B C D E
*/
#include<iostream>
using namespace std ;
int main(){ 
for (int i = 0 ; i <  5 ;i++){
    char ch = 'A';
    for (int j = 1 ; i + j <= 4 ; j++){
        cout << "  ";
    }
      for(int j = 0 ; j <= i ; j++){
        cout << ch << " ";
        ch += 1 ;
      }
    cout << endl ;
}

    return 0 ;
}