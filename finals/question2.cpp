#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std ;
void normalizing(int arr[] ,int size){
               int min_Value = INT_MAX , max_value = INT_MIN ;
     for(int i = 0 ; i < size ; i++){
         if(arr[i] < min_Value)
         min_Value = arr[i] ;
         if(arr[i] > max_value)
         max_value = arr[i] ;
     }
         cout << "Max value is : "<< max_value << endl ;
         cout << "Min value is : " << min_Value << endl ;

      int central_value = (min_Value + max_value)/2 , sum = 0 ; 
        cout << "Central value is : " << central_value << endl ;
      for(int i = 0 ; i< size ; i++){
         arr[i] -= central_value ;
        sum += arr[i] ;
      }
       // conditions 
      //    int average = sum / 100 ;
      int positive_Outliers = 0 ,  negative_Outliers = 0 , absolute_Sum = 0 ;
       for (int i = 0; i < size ; i++) {
           if( abs(100 *  arr[i]) > (1.5 * sum) ){
              sum += abs(arr[i]) ;
              if(arr[i] >= 0 )
               positive_Outliers ++ ;
            else
                negative_Outliers ++ ;
           } 
       }
            cout << " Positive outliers are : " << positive_Outliers << endl ;
            cout << "Negative outliers  are : " << negative_Outliers << endl ;
            cout << " Sum of absolute values of outliers is : " << sum << endl ;
}

int main(){
        srand(time(0)) ;
           int x[100] ;
           for (int i = 0; i < 100; i++) 
                x[i] = rand() ;   
        normalizing(x , 100 ) ;    
           
return  0 ;
}