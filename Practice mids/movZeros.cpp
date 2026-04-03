#include<iostream>
#include<ctime>
#include<cstdlib>
#include<cmath>
using namespace std ;
int main(){
    srand(time(0)) ;
    int arr[10] ;
    for(int i = 0 ; i < 10 ; i++){
        arr[i] = rand() % 2 ;
        cout << arr[i]  << " ";
    }
    cout << endl ;
    int i = 0 , j= 9 ;
    while(i < j){
        if(arr[j] != 1 && arr[i] !=0)
            swap(arr[i] , arr[j]) ;
             if(arr[i] == 0)
      i++ ;
      if (arr[j] == 1)
      j-- ; 
            
       
    }
     for(int i = 0 ; i < 10 ; i++){
        cout << arr[i]  << " ";
    }

    return 0 ;

}/*
 char ch = 97 ;
        int x = 1 ;
        x <<= 5 ;
        ch ^= x ;
        cout << ch ;*/