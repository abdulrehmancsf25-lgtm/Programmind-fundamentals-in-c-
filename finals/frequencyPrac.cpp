#include <iostream>
using namespace std;

int main() {
    /*
               int arr[] = {0,0,1,1,1,2,2,3,3,4,5} ;
               int size = sizeof(arr)/4 ;
                 int count = 1 ;
                   for (int i = 1; i < size ; i++) {
                      if(arr[i] == arr[i-1])
                        count++ ;
                    else{
                          cout << arr[i-1] << " repeats  " << count << " times " << endl ;
                           count = 1 ; 
                    }
                     if(i == size -1 )
                         cout << arr[i] << " repeats  " << count << " times " << endl ;
                   }
                */
               int arr[] = {2,0,1,2,0,5,0,4} ;
               int size = sizeof(arr) /4 ;
                for(int i = 0 ; i< size -1  ; i++){
                       int count = 1 ;
                         if(arr[i] == INT_MAX ) continue; 
                     for(int j = i+1 ; j < size ; j++){
                       
                         if(arr[i] == arr[j]){
                               count++ ;
                               arr[j] = INT_MAX ;
                         }
                     }
                      cout << arr[i] << "repeats " << count << " times " << endl ;
                        count = 1 ;
                }
                 if(arr[size-1] != INT_MAX)
                   cout << arr[size -1] << "repeats " << 1 << " times " << endl ;
    return 0; 
}