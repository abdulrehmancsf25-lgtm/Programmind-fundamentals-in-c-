#include<iostream>
using namespace std ;
int main(){
   int i = 0 , n ; 
   while(i < 5){
    cout << "Enter the number " ;
    cin >> n ;
    if(n <5){
        if ( n <0 )
        cout << "Invalid " << endl;
        
        if(n == 0)
        cout << "Zero " << endl ;
        else if( n == 1 )
        cout << "One " << endl ;
        else if( n == 2 )
         cout << "Two " << endl ;
        else if( n == 3)
        cout << "Three " << endl ;
        else
        cout << "Four " << endl ;

    }
    else if (n <= 9) {
           if( n == 5 )
         cout << "Five " << endl ;
          else if( n == 6 )
         cout << "Six " << endl ;
          else if( n == 7 )
         cout << "Seven  " << endl ;
          else if( n == 8 )
         cout << "Eight " << endl ;
         else 
         cout << "Nine " << endl ;
    }
    else 
        cout << "Enter one digit number only " << endl ;
    i++; 
   }
    return 0 ;
} 
