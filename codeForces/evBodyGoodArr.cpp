#include<iostream>
#include<algorithm>
using namespace std ;
int main(){
         int t ;
         cin >> t ;
         while(t--){
                     int n , i = 0 , count =  0;
                      cin >> n;
                    int *arr = new int[n] ;
                    for (int i = 0; i < n; i++) 
                         cin >> arr[i];
                    
                  int  prod = 1  ;
                 while(i < n-1 ){
                    if((arr[i] & 1) ^ (arr[i+1] & 1))
                     i++ ;
                     else{
                          count++ ;
                          prod = (arr[i] * arr[i+1]) ;
                          arr[i+1] = prod ;
                          prod = 1 ;
                          i++ ;
                     }
                 }
                     cout << count << endl ;
                    delete[] arr ;
         }
    return 0 ;

}