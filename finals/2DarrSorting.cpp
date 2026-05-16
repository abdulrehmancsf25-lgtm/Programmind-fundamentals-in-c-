/*. A two-dimension array of size 6 x 4 has 24 random elements. Write a function to place
elements in a single dimension array of 24 elements in ascending order. You are not
allowed to sort any array and do any modifications in two-dimensional array*/
#include <iostream>
using namespace std;

int main() {
           int arr[3][3] = {{5,7,4} , {1,0,0} ,{-9,6,-2}} ;
          // for only false if for true traverse whole boolean array 
           bool check[3][3] = {false} ;
           int temp[9] ;
           int count = 1 , k = 0 ;
           // count 9 elements 
            while(count <= 9 ){
                int min_Element = INT_MAX , ithIndex = -1 , jthINdex = -1 ;
                for(int i = 0 ; i < 3 ; i++){
                    for (int j = 0; j < 3 ; j++) {
                         if(check[i][j] == true )
                         continue; 
                         if(arr[i][j] < min_Element){
                            min_Element = arr[i][j] ;
                            ithIndex = i ;
                            jthINdex = j ;
                         }
                    }
                }
                     temp[k++] = min_Element ;
                     check[ithIndex][jthINdex] = true ;
                     count++ ;
            }
               for(auto i : temp)
                cout << i << " " ;
    return 0;
}