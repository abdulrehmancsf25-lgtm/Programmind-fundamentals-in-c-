/*
#include<iostream>
using namespace std ;
int main(){
  int num ;
  cout << "Enter the number " << endl; 
  cin >> num ;
  int bit ;
  cout << "Enter the bit number to check " << endl ;
  cin >> bit ;
     int mask = (1 << (bit -1 )) ;
     if (bit > 32){
        cout << "Out of range "<< endl;
     }
    else  if (num & mask)
     cout << "Bit is on " << endl ;
      else 
      cout << "Bit is off " << endl ;
   
    return 0 ;
} 
*/
/*
#include<iostream>
using namespace std ;
int main(){
  int num ;
  cout << "Enter the number " << endl; 
  cin >> num ;
  int bit ;
  cout << "Enter the bit number to on  " << endl ;
  cin >> bit ;
     int mask = (1 << (bit -1 )) ;
     if (bit > 32){
        cout << "Out of range "<< endl;
     }
     num = num | mask ;
     cout << "Updated number is  " << num << endl ;
      
   
    return 0 ;
} 
*/
/*
#include<iostream>
using namespace std ;
int main(){
  int num ;
  cout << "Enter the number " << endl; 
  cin >> num ;
  int bit ;
  cout << "Enter the bit number to off  " << endl ;
  cin >> bit ;
     int mask = (1 << (bit -1 )) ;
     if (bit > 32){
        cout << "Out of range "<< endl;
     }
     num = num ^ mask ;
     cout << "Updated number is " << num ;    
   
    return 0 ;
} */
/*
#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std ;
int main(){
  srand(time(0)) ;
  unsigned char ch = rand() ;
  cout << "Number: " <<(ch *1) << endl ;
  int count = 0 ;
  if(ch & 1 )
  count++;
  ch >>= 1;
  if(ch & 1 )
  count++;
  ch >>= 1;
  if(ch & 1 )
  count++;
  ch >>= 1;
  if(ch & 1 )
  count++;
  ch >>= 1;
  if(ch & 1 )
  count++;
  ch >>= 1;
  if(ch & 1 )
  count++;
  ch >>= 1;
  if(ch & 1 )
  count++;
  ch >>= 1;
  if(ch & 1 )
  count++;
  ch >>= 1;
     
   cout << "Number of set bits are " << count << endl ;
    return 0 ;
} */
#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std ;
int main(){
unsigned char a = 151 , b = 99 , c =  26 , d =  16 ;
unsigned int num = 0 ;
num = num | ((a << 24 ) | (b << 16 )  | (c << 8 ) | d ) ;
cout << "packed num " << num << endl ;
unsigned char a1 = num >> 24 ;
// below will wrong
//unsigned char b1 = num & ( 255 << 16) ;
//unsigned char c1 = num & (255 << 8) ;
unsigned char b1 = (num >> 16) & 255 ;
unsigned char c1 = (num >> 8 ) & 255   ;
unsigned char d1 = num & 255 ;
cout << "a1 " << a1 * 1 << endl ;
cout << "b1 " << b1 * 1 << endl ;
cout << "c1 " << c1 * 1 << endl ;
cout << "d1 " << d1 * 1 << endl ;
  return 0 ;
}