/*
A B C D E
B C D E F        DRAW THE PATTERN 
C D E F G
D E F G H
E F G H I  */
#include<iostream>
using namespace std ;
int main(){ 
    char ch = 'A' ;
    for (int i = 1 ; i <=5 ; i++){
for(int j= 1 ; j <=5 ; j++){
       cout << ch << " " ;
       ch += 1 ;
}   
       ch = 'A' + i ;
       cout << endl ;
    }


    return 0 ;
}