#include<iostream>
using namespace std ;
int main(){
    int n , k ;
    cin >> n >> k ;
    int arr[n] ;
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i] ;
    }
   
    int count = 0 ;
    if(arr[k -1] <= 0){
        for(int i = 0 ; i < n && arr[i] > 0; i++ ){
            count++ ;
        }
    }
    else{
        for(int i = 0 ; i< n ; i++){
            if(arr[i] >= arr[k -1])
            count++ ;
              else
        break ;
        }
    }
    cout <<  count ;
    return 0 ;
}