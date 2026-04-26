#include<iostream>
#include<vector>
using namespace  std ;
int main(){
    /*
    int arr[4] = {5 , 6 , 7 ,10 } ;
    int i = 1 ;
   for( ; i < 4 ; i++){
    if(arr[i] != arr[i-1]+1){
        cout << arr[i] << endl ;
        break ;
    }
   }
   if(i == 4)
   cout <<  "NULL " ;
   */
  /*
  vector<int> arr = {0,0,0,0,1,0,0,5,0,8} ;
  int i = 0  , k = 0 ;
  while(k < arr.size()){
    if(arr[k] != 0 ){
    swap(arr[i] , arr[k]) ;
    i++ ;
    k++ ;
    }
    else
        k++ ;
  }
  for(auto i : arr)
  cout << i << " " ;
  */
 /*
 vector<int> arr = {5,5,5,5} ;
 bool ans = true ;
 for(int i = 0  , k = arr.size() - 1 ; i < k ; i++,k--){
    if(arr[i] != arr[k])
    ans = false ;
    break ;
 }
 cout << ans ;
 */
/*
vector<int> arr = {0,32,24,12,42,42,5,5,3,6,8,} ;
int maximum = arr[0] ,secMaximum  = INT_MIN ;
for(int i = 1 ; i < arr.size() ; i++){
    if(arr[i] > maximum){
        secMaximum = maximum ;
  maximum = arr[i] ;
    }
    else if ( arr[i] < maximum && arr[i] > secMaximum)
    secMaximum = arr[i] ;
}

cout << secMaximum ;
*/
int k = 1 ;
vector<int> arr = {10,20,30} ;
vector<int> temp (arr.size()) ;
for(int i = 0 ;i < arr.size() ;i++){
    temp[i] = arr[ (i + k) % arr.size()] ;

}
for(auto i : temp ){
    cout << i << " " ;
}
    return 0 ;
}