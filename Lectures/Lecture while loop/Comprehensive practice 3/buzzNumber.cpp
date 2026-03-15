/*Q2. Write a program to check whether a given number is a Buzz number. A number is Buzz if it ends
with 7 or is divisible by 7.*/
#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout << "Enter the number " << endl ;
    cin >> n ;
    if(n % 10 == 7 )
    cout << n << " is a Buzz number " << endl ;
    else if (n % 7 == 0 )
       cout << n << " is a Buzz number " << endl ;
       else
       cout << n << " is a not Buzz number " << endl ;
    return 0 ;
}