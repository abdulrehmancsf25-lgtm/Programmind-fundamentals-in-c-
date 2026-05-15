#include <iostream>
#include <vector>
using namespace std ;
void  bubb_sorting(int arr[]  , int size  ){
           for(int j = 0 ; j < size ; j++){
             if(arr[j] > arr[j+1])
               swap(arr[j] , arr[j+1]) ;
           }

}
void bubbleSort(int arr[] , int size ){
         for(int i = 0 ; i < size -1 ; i++  ){
                bubb_sorting(arr , size - i -1 ) ;
         }
}


  int  Find_Index(int *arr   , int size , int &minimum_Index){
                      for(int j = minimum_Index +1 ; j < size ; j++){
                          if(arr[j] < arr[minimum_Index])
                           minimum_Index = j ;
                      }
  return minimum_Index ;
  }
  void selection_Sort(int arr[] , int&  size ){
      int minimum ; 
             for(int i = 0 ; i < size -1  ; i++){
             minimum = i ;
             int min_Index = (Find_Index(arr , size , minimum)) ;
              swap(arr[i] , arr[min_Index]) ;
             }
  }
int main() {
  /*                 int arr [10]  = { 3,2,1,1,7,2} ;
                 cout << (*arr) << endl ;
                 cout << arr[0] << endl ;
                 cout << " address  : " << endl ;
                 cout << arr << endl ;
                 cout << &arr << endl ;
                  cout << &(arr[0]) << endl ;
                  cout << &(*arr) << endl ; 
                // IMP CONCEPT 
                 cout <<  4[arr] << endl ;
                 cout <<  *(4 + arr) << endl ;
                  
 int arr[3][4] ; 
              for(int i = 0 ; i< 3 ; i++){
                    for(int j  = 0 ;  j  < 4 ; j++){
                         cin >>  arr[i][j] ; 

                    }
                   }

                     
             for(int i = 0 ; i < 4 ; i++){
               if( i & 1){
                           for(int j = 2 ; j >= 0 ; j--){
                            cout << arr[j][i] << " " ;
                           }
               }
               else 
               for(int j = 0 ; j < 3 ; j++){
                      cout << arr[j][i] << " " ;
               }
                         cout << endl ;
             }
             */
    int arr[10] = {10,9,8,7,6,5,4,2,2,1} ;
  //   bubbleSort ( arr , 10 ) ;
    int size = 10  ; 
      selection_Sort(arr , size) ;
         for(auto i : arr)
         cout << i <<" " ;

    return 0 ;
} 