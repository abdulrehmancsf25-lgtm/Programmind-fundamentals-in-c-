#include<iostream>
using namespace std ;
int main(){
    int a , b, c , d ;
    cout << "Enter the values " << endl ;
    cin >> a >> b >> c >> d ;

    if((a < b) && (b < c ) && ( c < d))
    cout << a <<" " << b <<" " << c <<" " << d ;
else if((a < c) && (c < b) && ( b < d ))
cout << a <<" " << c <<" " << b <<" " << d ;
else if((a < d) && (d < b ) && ( b < c))
cout << a << " " << d <<" " << b <<" " << c << endl ;
else if ((a < b) && (b < d ) && ( d < c))
cout << a << " " << b << " " << d << " " << c ;
else if ((a < c) && (c < d ) && (d < b))
cout << a << " " << c << " " << d << " " << b ;
else if ((a < d) && (d < c) && ( c < b))
cout << a << " " << d << " " << c << " " << b  ;

else if((b < c) && (c < a) && ( a < d ))
cout << b <<" " << c <<" " << a <<" " << d ;
else if((b < d) && (d < a ) && ( a < c))
cout << b << " " << d <<" " << a <<" " << c << endl ;
else if ((b < a) && (a < d ) && ( d < c))
cout << b << " " << a << " " << d << " " << c ;
else if ((b < c) && (c < d ) && (d < a))
cout << b << " " << c << " " << d << " " << a ;
else if ((b < d) && (d < c) && ( c < a))
cout << b << " " << d << " " << c << " " << a ;
else if ((b < a ) && (  a < c ) && ( c < d))
cout << b <<" " << a <<" " << c << " " << d ;


else if((c < b) && (b < a) && ( a < d ))
cout << c <<" " << b <<" " << a <<" " << d ;
else if((c < d) && (d < a ) && ( a < b))
cout << c << " " << d <<" " << a <<" " << b << endl ;
else if ((c < a) && (a < d ) && ( d < b))
cout << c << " " << a << " " << d << " " << b ;
else if ((c < b) && (b < d ) && (d < a))
cout << c << " " << b  << " " << d << " " << a ;
else if ((c < d) && (d < c) && ( b < a))
cout << c << " " << d << " " << b << " " << a ;
else if ((c < a) && ( a < b) && ( b < d ))
cout << c << " " << a << " " << b << " " << d ;


else if((d < b) && (b < a) && ( a < c ))
cout << d <<" " << b <<" " << a <<" " << c ;
else if((d < c) && (c < a ) && ( a < b))
cout << d << " " << c <<" " << a <<" " << b << endl ;
else if ((d < a) && (a < c ) && ( c < b))
cout << d << " " << a << " " << c << " " << b ;
else if ((d < b) && (b < c ) && (c  < a))
cout << d  << " " << b  << " " << c  << " " << a ;
else if ((d  < c ) && (c  < d ) && ( b < a))
cout << d  << " " << c  << " " << b << " " << a ;
else if((d < a) && (a < b) && ( b < c ) )
cout << d <<" " << a <<" " << b << " " << c ; 

     return 0 ;
}