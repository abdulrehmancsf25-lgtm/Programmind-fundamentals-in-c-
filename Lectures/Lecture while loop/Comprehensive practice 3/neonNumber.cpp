/*Q1. Write a program to check whether a given number is a Neon number. A Neon number is a number
where the sum of digits of its square equals the number itself.*/
#include<iostream>
using namespace std ;
int main(){
    int n , sum = 0;
    cout << "Enter the number " << endl ;
    cin >> n ;
    int sq = n * n ;
    while(sq !=0 ){
        int digit = sq % 10 ;
        sum += digit ;
        sq /= 10 ;
    }
    if(sum ==n )
    cout << n << " is a neon number " << endl ;
    else 
    cout << n << " is not a neon number "<< endl ;
    return 0 ;
}