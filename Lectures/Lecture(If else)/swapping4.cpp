#include<iostream>
using namespace std ;
int main(){
    int a , b , c, d ;
      cout << "Enter the values " << endl ;
      cin >> a >> b >> c >> d  ;
     if( a  > b ){
        int temp =  b ;
        b =  a ;
        a = temp ;
     }
     if(b > c ){
        int temp = c ;
        c = b ;
        b = temp ;
     }
     if ( c > d ){
         int temp = d ;
        d = c ;
        c = temp ;
     }
      if( a  > b ){
        int temp =  b ;
        b =  a ;
        a = temp ;
     }
     if(b > c ){
        int temp = c ;
        c = b ;
        b = temp ;
     }
      if( a  > b ){
        int temp =  b ;
        b =  a ;
        a = temp ;
     }
     cout << a << " " << b << " " << c << " "  << d ;
    return 0 ;
}