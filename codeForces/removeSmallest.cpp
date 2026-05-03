#include<iostream>
#include<array>
#include<algorithm>
using namespace std ;
int main(){
         int t ;
         cin >> t ;
         while(t--){
                     int n ;
                      cin >> n;
                    int *arr = new int[n] ;
                    for(int i = 0 ; i< n ; i++)
                    cin >> arr[i] ;
                    bool check ;
                    sort(arr,arr+n) ;
                    for(int i = 0 ; i < n-1 ; i++){
                        if((arr[i] +1 ) == arr[i+1]  || arr[i] == arr[i+1])
                        check = true ;
                        else{
                            check = false ;
                            break ;
                        }
                    }
                    if(check == true || n == 1)
                    cout << "YES" << endl ;
                    else
                    cout << "NO" << endl ;
                    delete[] arr ;
         }
    return 0 ;

}