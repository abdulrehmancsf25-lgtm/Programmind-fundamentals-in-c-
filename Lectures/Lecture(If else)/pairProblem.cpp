#include<iostream>
using namespace std ;
int main(){
  int a , b , c , d ;
  cin >> a >> b >> c >> d ;
  if ( a == b ){
   if ( a > c)
              cout << a << " " << c ;
    else 
            cout << c << " " << a ;        

  }
  else if ( a == c ){
    if(a > b)
              cout << a << " " << b ;
      else 
                cout << b << " " << a ;      
  }
  else if (a == d){
    if (a > c )
              cout <<  a << " " << c ;
            else
            cout << c << " " << a ;
  }
  else if (b == c){
    if (b > a )
    cout << b << " " << a ;
  else
  cout << a << " " << b ;
  }
  

    return 0 ;
}