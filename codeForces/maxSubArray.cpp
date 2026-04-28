#include<iostream>
#include<vector>
using namespace std ;
int main(){
    int t ; cin >> t ;
    while(t--){
    int n ;
    cin >> n ;
    vector<int> arr(n) ;
   for(int i = 0 ; i < n ; i++){
    cin >> arr[i] ;
   } 
    
    int max_Subarray = INT_MIN  , count = 1 ;
    for(int i= 1 ; i < n ; i++){
        if(arr[i] > arr[i-1]){
            count++ ;
        }
         else{
               if(count > max_Subarray )
               max_Subarray = count ;
               count = 1 ;
         }
    }
          if(count > max_Subarray)
          max_Subarray = count ;
    cout << max_Subarray ;
}
     return 0 ;
}

