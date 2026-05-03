#include<iostream>
using namespace std ;
int main(){
             // 
              int t ;
              cin >> t ;
               while(t--){
                            int n ;
                            cin >> n ;
                            int arr[n] ;
                            for(int i = 0 ; i < n ; i++)
                             cin >> arr[i] ;
          
    if(n >1){                                  
     int count_Odd = 0 , count_Even = 0 ;
     long long total_Sum = 0 ;
    
// ODD n case 
         if(n&1){
                 total_Sum += arr[n/2] ;
                 if(arr[n/2] & 1)
                   count_Odd += 1 ;
                 else 
                    count_Even += 1 ;
         }
    for(int i = 0 , j = n-1 ; i < j  ; i++,j--){
          total_Sum += arr[i] ;
          total_Sum += arr[j]  ;
         if(arr[i] & 1)
        count_Odd++ ;
        else
        count_Even ++ ;
        if(arr[j] & 1)
        count_Odd ++ ;
        else 
        count_Even ++ ;
    }
            if(total_Sum & 1 || count_Odd > 0 && count_Even > 0){
                              cout << "YES" << endl ;
            }
                 else
                     cout << "NO" << endl ;
} // else for n==1 
else
{
    if(arr[0] & 1 )
    cout << "YES" << endl ;
    else
    cout << "NO" << endl ;
}
}   
    return 0 ;
}
