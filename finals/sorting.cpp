#include <iostream>
#include<ctime>
using namespace std;
int main() {
            time_t t1 , t2 ;
              int arr[]= {9,9,9,7,8,6,5,4,3,1,1,1,1,9} , size = sizeof(arr)/4 ;
              // BUBBBLE SORT 
       /*        time(&t1) ;
              for (int i = 1; i < size ; i++) {
                   for (int j = 0; j < size -1 ; j++) {
                     if(arr[j] > arr[j+1]){
                        arr[j] = arr[j] ^ arr[j+1] ;
                        arr[j+1] = arr[j] ^ arr[j+1] ;
                        arr[j] = arr[j] ^ arr[j+1] ;
                     }
                   }
              }
              time(&t2) ;
             for(auto i : arr)
               cout << i << " " ;
               cout << endl ;
               double timediff = difftime(t2,t1) ;
               cout << " Execution Time is " << timediff;
               */
    // SELECTION SORT 
    /*
                    for (int i = 0; i < size -1; i++) {
                        int miun_Index = i ;
                        for(int j = i+1 ; j < size ; j++){
                            if(arr[j] < arr[miun_Index])
                            miun_Index  = j ;
                        }
                         swap(arr[i] , arr[miun_Index]) ;
                    }
              for(auto i : arr)
               cout << i << " " ;
    */
   // INSERTION SORT 
                    for(int i = 1 ; i < size ; i++){
                        int temp = arr[i] ;
                        int j ;
                        for( j = i -1 ; j >= 0 && arr[j] > temp ; j--)
                           arr[j+1] = arr[j] ;
                           // inserting value
                        arr[j+1] = temp ;
                    }
                      for(auto i : arr)
                       cout << i << " " ;
    return 0;
}