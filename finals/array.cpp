#include <iostream>
#include<algorithm>
using namespace std;
int main() {
      int arr[50] = {-14, 32, 7, -45, 12, -8, 7, 22, -30, 5
                     ,-19, 7, 41, -2, -33, 18, 7, -50, 9, 27,
                     -11, 36, 7, -25, 0, 14, -40, 7, 48, -6,
                     21, -37, 7, 3, -15, 29, -22, 7, 44, -10,
                     7, -48, 16, -3, 39, 7, -12, 25, -29, 7} ;
      // COPY ARRAY IN A NEW ONE
int temp[50] ;
copy(begin(arr) , end(arr) , begin(temp)) ;
// SORTING 
  for(int i = 1 ; i < 50 ; i++){
     for(int j = 0 ; j <= 50 - i ; j++){
        if(temp[j] > temp[j+1])
         swap(temp[j] , temp[j+1] ) ;
     }
  }
       int max_Count = INT_MIN, max_element = INT_MIN  , count = 1 ;
          
       for(int i = 0 ; i < 49 ; i++){
          if(temp[i] == temp[i+1]){
            count++ ;
             if(count > max_Count ){
                max_Count = count ;
                max_element = temp[i] ;
             }
          }
          else{
              count = 1 ;
          }
       }
       for(int i = 0 ; i < 50 ; i++){
          if(arr[i] <  0)
           arr[i] = max_element ; 
       }
       for(auto i : arr)
         cout << i << " " ;
 return 0 ;
}