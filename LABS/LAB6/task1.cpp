#include<iostream>
using namespace std ;
int main(){
    int num ;
    cout << "Enter the integer value : " ;
    cin >> num ;
    int num2 = 0 , num1 = num ;
    while(num != 0 ){
      int digit = num % 10 ;
     num2 = (num2 *10) + digit ;
     num /= 10 ;
    }
    if (num1 == num2 )
    cout << "The number is a palindrome " << endl ;
    else 
    cout << "The number is not palindrome " << endl ;
    return 0 ;
}
