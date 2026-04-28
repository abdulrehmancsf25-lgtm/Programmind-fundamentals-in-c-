#include<iostream>
#include<algorithm> 
#include<array>
using namespace  std ;
int main(){
            int t;
            cin >> t ;
            while(t--){
                       int n ;
                       cin >> n ;
                       int arr[n] ;
                       for(int i = 0 ; i < n ; i++)
                       cin >> arr[i] ;
                       if(n == 1)
                         cout << "YES" << endl ;
                        else{
                       sort(arr , arr + n) ;
                       int i = 1 ;
                       for(; i < n ; i++){
                          if(arr[i] == arr[i-1]){
                            cout << "NO"<< endl ;
                            break ;
                          }
                       }
                        if(i == n )
                           cout << "YES" << endl ;
                    }
                      }
return 0 ;
}
