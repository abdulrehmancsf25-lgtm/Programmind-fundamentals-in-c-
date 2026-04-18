#include<iostream>
#include<cmath>
using namespace std ;
int main(){
      //  char ch = 130 ;
     //   cout << ch * 1 ;
   
    //    double x = 3.0/ 2 ;
  //cout << x << endl ;
 //cout << 2 % 5 * 2 / 2 ;

 /*
    double a = 5.0 / 0.0;    // inf
    double b = -5.0 / 0.0;   // -inf
    double c = 0.0 / 0.0;    // nan
    cout << a << " " << b << " " << c << " " ;
    cout << 0 / 0.0 ;
    */
  
 /*
       PACKING AND UNPACKING OF CHARS 
    unsigned char ch , a = 7 , b = 3 , c = 6 ;
    ch = (a << 5 ) | (c << 2) | b ;
    unsigned char x , y , z ;
    x = ch >> 5 ;
    y = ((ch << 3)  >> 6 ) ;
    z  = ch & 3 ;
    cout << x*1 << " " << y*1 << " " << z*1 ;
*/
  /*  
                CHECKING A NUMBER IS PRIME OR NOT 
  int num ;
  bool isprime = true ;
  cin >> num ;
  int i ;
  if( num < 2)
    isprime = false ;
    else
    {
for( i = 2 ; i <= sqrt(num) ; i++){
  if( num % i == 0 ){
    isprime = false ;
    break ;
  }
}    
    }
    if(isprime) 
              cout << "Prime number " ;
              else
              cout << "Not prime " ;
*/

   /*
            // PACKING CHARS IN SHORT INT 
    unsigned short int x ;
    char ch = 98   , ch2 = 127 ;
    x = ( ch << 8 ) | ch2 ;
    unsigned char w, z ;
    w = x >> 8 ;
    z = x & 255 ;
    cout << w*1 << " " << z*1 ;
    */
/*  
                PACKING COLORS 
    int r = 255,  g = 128,  b = 0, a = 255 ;
    unsigned int color ;
    color = (r << 24) | ( g << 16 ) | ( b << 8) | a ;
    int green = (( color << 8) >> 24) ;
    cout << green ;
*/
/*
unsigned char ch = 0 ;
unsigned char mask =  1 | ( 1 << 3 ) | ( 1 << 7) ;
ch |= mask ;
cout << ch*1 << endl ;


int bitoff = 1 << 7 ;
ch ^= bitoff ;
cout << ch* 1 << endl ;
   

 int check8Bit = 1 << 7 ;
 if(check8Bit & ch) 
 cout << "8th Bit is on " << endl ;
 else
 cout << "8th Bit is off " << endl ;
 */
int i = 10 , j = 20   ;
 while (i <= 30){
  cout << i << " " << j << endl ;
  i += 5 ;
  j += 20 ;
 }
 cout << ++(i*2);
    return 0 ;
}