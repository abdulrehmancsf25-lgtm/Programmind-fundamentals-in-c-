#include<iostream>
using namespace std ;
int main(){
    int num1 , num2 , max , min ;
    cin >> num1 >> num2 ;
    if (num1 > num2){
    max = num1 ;
    min = num2 ;
    }
    else {
        max = num2 ;
        min = num1 ;
    }
    while((max - min) + 1){
        cout << min  << " " ;
        min ++ ;
    }

    return 0 ;
} 
