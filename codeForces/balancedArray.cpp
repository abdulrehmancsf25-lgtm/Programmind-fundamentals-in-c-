#include<iostream>
#include<array>
#include<vector>
using namespace std ;
int main(){
         int t ;
         cin >> t ;
         while(t--){
      int n ;
      cin >> n;
     vector<int> arr(n) ;
      long long even_Sum = 0  , odd_Sum = 0 ;
     // FIRST HALF
     for(int i = 0 ,even = 2 ; i < n/2 ; i++){
        arr[i] = even ;
        even_Sum += arr[i] ;
        even += 2 ;
     }
  
     // SECOND HALF
     for(int j = n/2,odd = 1 ; j < n ; j++){
        arr[j] = odd ;
       odd_Sum += arr[j] ;
        odd += 2 ;
     }
        if((n/2 % 2) == 0  ){
        if(  odd_Sum + n/2 == even_Sum ){
        cout << "YES" << endl ;
         arr[n-1] += n/2 ;
         for(int i = 0 ; i < n ; i++){
            cout << arr[i] << " " ;
         }
        }
       else
       cout << "NO" << endl ;
    }
    else
    cout << "NO" << endl ;
   }
    return 0 ;

}