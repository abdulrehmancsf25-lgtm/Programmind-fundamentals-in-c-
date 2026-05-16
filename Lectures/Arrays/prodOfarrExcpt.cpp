#include<iostream>
using namespace std ;
int main(){
     int arr[] = {1,2,3,4} ; 
     int size = sizeof(arr)/4 ;
     int temp[size] = {0} ;
     for(int i = 0 ; i < size ; i++){
        int prod = 1 ;
        for(int j = 0 ; j < size ; j++){
            if(arr[i] != arr[j])
            prod *= arr[j] ;
        }
             temp[i] = prod ;
     }
     for(auto i : temp){
        cout << i << " ";
     }
    return 0 ;
}