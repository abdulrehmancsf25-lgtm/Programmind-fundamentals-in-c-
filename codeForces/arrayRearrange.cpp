#include<iostream>
#include<array>
#include<algorithm>
using namespace std ;
int main(){
         int t ;
         cin >> t ;
         while(t--){
                     int n , x ;
                      cin >> n >> x ;
                    int *arr1 = new int[n]  , *arr2 = new int[n] ;
                    for(int i = 0 ; i< n ; i++)
                    cin >> arr1[i] ;
                    for(int j = 0 ; j < n ; j++)
                    cin >> arr2[j] ;
                    // bool 
                    bool check  = true ;
                for(int i = 0 , j = n-1 ; i < n  && j >= 0 ; i++ , j--){
                    if(arr1[i] + arr2[j] > x  ){
                        check = false ;
                        break ;
                    }

                }
                  if(check == true )
                  cout << "Yes" << endl ;
                  else
                  cout << "No" << endl ;
                    delete[] arr1 ;
                    delete[] arr2 ;
         }
    return 0 ;

}