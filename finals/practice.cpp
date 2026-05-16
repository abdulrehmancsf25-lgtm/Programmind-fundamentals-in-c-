#include <iostream>
using namespace std;
void sort(int arr[] , int size ){
                        for(int i = 1 ; i < size ; i++){
                        int temp = arr[i] ;
                        int j ;
                        for( j = i -1 ; j >= 0 && arr[j] > temp ; j--)
                           arr[j+1] = arr[j] ;
                           // inserting value
                        arr[j+1] = temp ;
                    }
}
void colum_Wise_sorting(int arr[][3] , int colNo , int rowsize){
                    for(int i = 1 ; i < rowsize ; i++){
                          for(int j  = 0 ; j < rowsize - i  ; j ++){
                           if(arr[j][colNo] > arr[j+1][colNo])
                           swap(arr[j][colNo] , arr[j+1][colNo]) ;
                    }
                    }
                    
}
int main() {
     //  int x[] = {9,8,7,6,4,3,1};
       //sort( x ,7 ) ;
    /*
             int arr[] = {58, 50, 49, 12, 97 }, sum = 0 ;
             int size = sizeof(arr)/4 ;
             for(int i = 0 ; i < size ; i++){
                 if(arr[i] >= 95)
                  arr[i] = 100 ;
                  else if(arr[i] >= 50 )
                      arr[i] += 5 ;
                sum += arr[i] ;
             }
             double  avg = (double)sum / size ;
             cout << " Avg is : " << avg ;
             */
       /*     int arr[3][3] = {{6,8,1} , {3,9,4},{9,1,7}} ;
           // sort(arr[0] , 9) ; 
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                     cout << arr[i][j] << " " ;
                }
                   cout << endl ;
            }
              cout << " After colum wise sorting " << endl ;
                for(int i = 0 ; i < 3 ; i++)
                  colum_Wise_sorting(arr , i , 3) ;
              for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                     cout << arr[i][j] << " " ;
                }
                   cout << endl ;
            }
                   */
                int arr[] = {-6,6,7,4,2,1,4,-3,4,0,4,-5,-9,-10,4} ;
                int size = sizeof(arr)/4 ;
                int temp[size] ;
                for(int i  = 0 ; i < size ; i++)
                     temp[i]  = arr[i] ;
              sort(temp , size ) ;
               int count = 1 , max_Count = -1 , maxElement ;
               for (int i = 1; i <  size; i++) {
                        if(temp[i] == temp[i-1])
                         count++ ;
                           else
                            count = 1 ;
                         if(count > max_Count ){
                                  max_Count = count ;
                                  maxElement  = temp[i] ;
                         }
                         
                          
                  
               }
                cout << maxElement ;
        return 0;
}