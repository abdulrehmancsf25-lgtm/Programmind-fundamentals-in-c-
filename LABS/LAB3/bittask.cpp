#include<iostream>
using namespace std ;
int main(){
  
  cout << " enter a "<< endl ;
   unsigned char a ;
   cin >> a  ;
   cout << " enter  x " << endl ;
   unsigned char x ;
   cin >> x ;
   int c1 = 0 , c2 =0 ;
   if ( a & 1 )
   c1 ++ ;
 a = a >> 1 ;
 if ( a & 1 )
   c1 ++ ;
 a = a >> 1 ;
 if ( a & 1 )
   c1 ++ ;
 a = a >> 1 ;
 if ( a & 1 )
   c1 ++ ;
 a = a >> 1 ;
 if ( a & 1 )
   c1 ++ ;
 a = a >> 1 ;
 if ( a & 1 )
   c1 ++ ;
 a = a >> 1 ;
 if ( a & 1 )
   c1 ++ ;
 a = a >> 1 ;
 if ( a & 1 )
   c1 ++ ;
 a = a >> 1 ;
                     cout << c1  << endl ;
 if (x & 1 )
 c2++ ;
 x >>= 1 ;
  if (x & 1 )
 c2++ ;
 x >>= 1 ; 
 if (x & 1 )
 c2++ ;
 x >>= 1 ; 
 if (x & 1 )
 c2++ ;
 x >>= 1 ; 
 if (x & 1 )
 c2++ ;
x >>= 1 ;
  if (x & 1 )
 c2++ ;
 x >>= 1 ; 
 if (x & 1 )
 c2++ ;
 x >>= 1 ; 
 if (x & 1 )
 c2++ ;
 x >>= 1 ;
 cout << c2 << endl ;
 if (c1 == c2 )
 cout << "Compatible " << endl ;
 else 
 cout << "Not compatible " << endl ;
    return 0 ;
}