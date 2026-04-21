#include<iostream>
using namespace std ;
void  selection_Sort(int arr[] ,int  size){
    for(int i = 0 ; i < size -1 ; i++){
       int minIndex = i ;
       for(int j = i+1 ; j < size  ; j++){
        if(arr[j] < arr[minIndex]) 
        minIndex = j ;
       }
        swap(arr[i] , arr[minIndex]) ;
    }
    
 }
int main(){
      int arr[] = {3,5,4,2,1,7,8,6} ;
    int size = sizeof(arr) / 4;
    selection_Sort(arr , size) ;
    for(int i : arr){
        cout << i << " " ;
    }
    return 0 ;
}