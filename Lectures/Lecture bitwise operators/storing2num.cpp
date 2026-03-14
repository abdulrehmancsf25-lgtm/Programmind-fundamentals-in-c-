#include<iostream>
// library required
#include<cstdint>
using namespace std ;
int main(){
    int num1 , num2 , pack ;
    cin >> num1 >> num2 ;
    // num1 and num2 must be less than 15 ;
       pack = (num1 << 4 ) | num2 ;
        //for num1
        cout << (pack >> 4 ) << endl ;
         // for num2 
         cout << (pack & 15 ) ;
// For exactly 1 byte instead of int 
uint8_t packedByte = (num1 << 4 ) | num2 ;
cout << endl << endl ;
 cout << (packedByte >> 4 ) << endl ;
 cout << (packedByte & 15 ) ;
    return 0 ;
}