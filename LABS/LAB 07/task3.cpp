#include<iostream>
#include<ctime>
#include<cstdlib>
#include<cmath>
using namespace std ;
int main(){
    srand(time(0)) ;
    int arr[10] ;
     cout << "Original binary array: " ;
    for(int i = 0 ; i < 10 ; i++){
        arr[i] = rand() % 2 ;
         cout << arr[i] ;
    }
    cout << endl ;
    
    int ans = 0 ;
    for(int j = 9 , i =  0 ; j >= 0 ; j-- ,i++){
        if(arr[j] == 1)
        ans += pow(2,i) * arr[j] ;
    }

   cout << "Original binary number: " << ans << endl ;

   cout << " Modified binary array: " ;
for(int i = 0 ; i < 10 ; i++){
    if(arr[i] == 0){
    arr[i] = 1 ;
    cout << arr[i] ;
    }
    else{
    arr[i] = 0 ;
    cout << arr[i] ;
    }
}
cout << endl ;
cout << "Modified binary number: " ;
 int ans1 = 0 ;
    for(int j = 9 , i= 0  ; j >= 0 ;  i++ ,j--){
        if(arr[j] == 1)
        ans1 += pow(2,i) * arr[j] ;
    }
cout << ans1 << endl ;

cout << "Difference: " ;
if(ans > ans1)
cout << ans - ans1 << endl ;
else
cout << ans1 - ans << endl ;
    return 0 ;

}
