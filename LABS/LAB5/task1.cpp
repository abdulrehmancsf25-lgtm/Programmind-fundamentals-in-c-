#include<iostream>
using namespace std ;
int main(){
    int n ;
    while(1 ){
        cout << "Enter value (-1 to stop)" << endl ;
        cin >> n ;
        if (n == -1 )
        break ;
        int mod = n % 100 ;
        if (mod < 50 )
        cout << "Rounded value : " << (n - mod ) << endl ;
        else 
        cout << "Rounded value  : " << (n + (100 - mod )) << endl ;

    }
    return 0 ;
}