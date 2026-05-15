/*Question 1: Two-Phase Normalization
You have two integer arrays of size 100 each, both containing only positive numbers. First, normalize both arrays independently using the method described (subtract central value = (min+max)/2). Then, create a third array where each element is the absolute difference between corresponding elements of the two normalized arrays. Find and return:

The index where this difference array has its maximum value
The maximum difference value itself
How many elements in the difference array are greater than 50

Constraint: Solve in a single pass after normalization (don't traverse the difference array multiple times).*/
#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std ;
void print(int arr[] , int size ){
       for(int i = 0 ; i< size ; i++)
         cout << arr[i]  << " " ;
        cout << endl ;
}
void subtract_cental_Value(int arr[] , int size ){
     int min_Value = INT_MAX , max_value = INT_MIN ;
     for(int i = 0 ; i < size ; i++){
         if(arr[i] < min_Value)
         min_Value = arr[i] ;
         if(arr[i] > max_value)
         max_value = arr[i] ;
     }
         cout << "Max value is : "<< max_value << endl ;
         cout << "Min value is : " << min_Value << endl ;

      int central_value = (min_Value + max_value)/2 ;
        cout << "Central value is : " << central_value << endl ;
      for(int i = 0 ; i< size ; i++){
         arr[i] -= central_value ;
      }
}
void third_Array_Calculations(int arr[] , int x[] , int y[] , int size ){
      int index = -1 , max_difference = INT_MIN , count = 0 ;
      for (int i = 0; i < size; i++) {
        int differnce = x[i] - y[i] ;
           if( differnce > 0 )
           arr[i] =  differnce ;
           else
            arr[i] = (differnce * -1) ;
             
        // maxdiff
           if(arr[i] > max_difference){
           max_difference = arr[i] ;
           index = i ;
           }
           if(arr[i] > 50 )
              count ++ ;
      }
       cout << "Diff array is : " << endl ;
            for(int i = 0 ; i < size ; i++)
              cout << arr[i] << " "; 
              cout << endl ;

          cout << "Max value difference is : " << max_difference << endl ;
          cout << "Max  difference value is at index : " << index << endl ;
          cout << "No. of elements of difference array greater than 50 are : " << count ;
}

int main(){
           int x[100] , y[100] ,z[100] ;
           for (int i = 0; i < 100; i++) {
                x[i] = rand() %500  + 0 ;
                y[i] = rand() %500  + 0 ;
           }
            print(x , 100 ) ;
           subtract_cental_Value(x , 100);
             print(y , 100 ) ;
           subtract_cental_Value(y , 100 ) ;
           print(x , 100 ) ;
           print(y , 100 ) ;
           third_Array_Calculations( z , x , y , 100 ) ;

}