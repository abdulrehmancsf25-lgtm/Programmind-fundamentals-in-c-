#include<iostream>
using namespace std ;
int main(){
    for (int i = 10 ; i <= 20 ; i++){
        cout << i << "  " ;
        for(int j = 1 ; j <= i ; j++){
        if(i % j == 0)
        cout << j << " " ;
        }
        cout << endl ;
    }

    return 0 ;
}