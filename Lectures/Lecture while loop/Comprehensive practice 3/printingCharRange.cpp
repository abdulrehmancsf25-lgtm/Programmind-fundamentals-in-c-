/*Q3. Write a program to input two characters and print characters in between:*/
#include<iostream>
using namespace std ;
int main(){
    char ch1 , ch2 ;
    cin >> ch1 >> ch2 ;
    int i = ch2 - ch1 , j = 1;
     cout << ch1 << " ";
    while(i ){
             char ch3 = ch1 + j ;
             cout << ch3 << " " ;
     j++ ;
     i-- ;
    }
    return 0 ;
}