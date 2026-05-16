#include <iostream>
#include<cstdlib>
#include<ctime>
#include<algorithm>
using namespace std;
int most_FrequentNo(int arr[] , int size){
                   int count  = 1 , max_Count = -1 , freqElement ;
                   for (int i = 1 ; i < size ; i++) {
                       if(arr[i] == arr[i-1])
                        count++ ;
                         else 
                         count = 1 ;
                         if(count > max_Count ){
                               max_Count = count ;
                               freqElement = arr[i-1] ;
                         }   
                   }
    return freqElement ;
}

int main() {
           int arr[50] = {-7, 14, -7, -23, 45, -7, 88, -12, -7, 3, 
 99, -7, -56, 12, -7, 67, -89, -7, 22, -34, 
 -7, 5, -7, -78, 9, -7, 54, -41, 18, -92, 
 33, -4, 76, -15, 62, -8, 27, -63, 81, -2, 
 50, -19, 11, -71, 95, -30, 4, -85, 29, -47} , temp[50] ;
          
             for (int i = 0; i < 50  ; i++) {
                temp[i] = arr[i] ;
             }

               sort(temp , temp + 50 );
              int element = most_FrequentNo(temp , 50 ) ;
              cout << "FREQ ELEMENT IS : " << element << endl ;
              // 1st replacement 
               int firstCount = 0 , secondCount = 0 ;
            for(int i = 0 ; i< 50 ; i++)
               if(arr[i] < 0 ){
                      arr[i] = element ;
                      firstCount++ ;
               }
                cout << firstCount ;
                // second freq element 
               for(int i = 0 ; i< 49 ; i++){
                  int   count = 0 ;
                  for(int j = 0 ; j < 50 ; j++ ){
                     if(arr[i] == arr[j]){
                        count++ ;
                     }
                  }
                      if(count == 1 ){
                           arr[i] = element ;
                           secondCount++ ;
                      }
                       
               }
                  cout << "second count    " << secondCount  << endl;
               for(auto i : arr)
                 cout << i << " ";

                 cout << endl ; 
           //      cout << "Total elements changed : " << (firstCount+ secondCount) << endl;
    return 0;
}