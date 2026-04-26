#include<iostream>
using namespace std ;
long long factorial (int n){
    long long ans = 1;
    while(n > 0){
        ans *= n ;
        n -= 1 ;
    }
    return ans ;
}
/*
long long factorial (int n){
    if(n == 0)
    return 1 ;
    return n * factorial(n-1) ;
}*/
int main(){
    int num ;
    cout << "Enter the number from 0 to 20 to find fatorial ";
    cin >> num ;
    if(num >= 0 && num < 21)
    cout << factorial(num)  ;
    else
    cout << "Please enter the vaild number " ;
    return 0 ;
}