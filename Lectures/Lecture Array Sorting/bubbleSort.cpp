#include<iostream>
using namespace std ;
void  bubble_Sort(int arr[] ,int   size){
     for(int i = 1 ; i < size  ; i++){
        for(int j = 0 ; j < size - i ;j++){
            if(arr[j] > arr[j+1])
            swap(arr[j] , arr[j+1]) ;
        }
     }
}
int main(){
    int arr[] = {3,5,4,2,1,7,8,6} ;
    int size = sizeof(arr) / 4;
    bubble_Sort(arr , size) ;
    for(int i : arr){
        cout << i << " " ;
    }
    return 0 ;
}