#include<iostream>
using namespace std ;
int main(){
     int n ,count_Odd = 0 , count_Even = 0 ;
    cout << "enter n  " ;
    cin >> n ;
    int arr[n] ;
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i] ;
    }
    if(n & 1){
        if(arr[n/2] & 1)
        count_Odd++ ;
        else
        count_Even++ ;
    }

    for(int i = 0 , j = n-1 ; i < j  ; i++,j--){
        if(arr[i] & 1)
        count_Odd++ ;
        else
        count_Even ++ ;
        if(arr[j] & 1)
        count_Odd ++ ;
        else 
        count_Even ++ ;
    }
    if(count_Odd & 1 && count_Even & 1)
    cout << "YES" ;
    else if((count_Even & 1 == 0) && (count_Odd & 1 == 0) )
    cout << "NO" ;
    else
    cout << "YES" ;
    return 0 ;
}