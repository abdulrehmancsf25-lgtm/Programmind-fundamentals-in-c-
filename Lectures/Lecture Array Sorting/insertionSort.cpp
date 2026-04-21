#include<iostream>
using namespace std ;
void  insertion_Sort(int arr[] ,int   size){
    for(int i = 1 ; i < size ; i++){
        int temp = arr[i] ;
        int j = i-1 ;
    for( ;  j >=0 ; j--){
        if(arr[j] > temp ){
           arr[j+1] = arr[j] ;
        }
        else
            break ;
         
    }
        arr[j+1] = temp ;
    }
}
int main(){
    int arr[] = {3,5,4,2,1,7,8,6} ;
    int size = sizeof(arr) / 4;
    insertion_Sort(arr , size) ;
    for(int i : arr){
        cout << i << " " ;
    }
    return 0 ;
}