#include<iostream>
using namespace std ;
int main(){
    int i = 0 , x1 , x2 ;
    while(i < 5 ){
        cout << "Enter first pair of numbers  : " ;
        cin >> x1 >> x2 ;
        if (x1 > x2 )
        cout << "First number is larger " << endl ;
        else if (x2 > x1 )
            cout  << "Second number is larger " << endl ;
        else 
        cout << "Both numbers are equal " << endl ;
             i++ ;
            }
    return 0 ;
}