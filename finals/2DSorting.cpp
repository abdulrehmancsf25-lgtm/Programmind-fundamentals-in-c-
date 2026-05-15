#include <iostream>
using namespace std;
void print(int arr[] , int rows , int cols  ){
                                for(int i = 0 ; i < rows ; i++ ){
                                    for(int j = 0 ; j < cols ; j++){
                                    cout << arr[cols* i + j] << " " ;
                                    }
                                    cout << endl ;
                                }
}
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
int main() {
             int arr[4][4] = {{4,3,2,1} , {8,7,6,5} , {9,8,7,6,} , {5,4,3,2}} ;
             print(arr[0] , 4 , 4 ) ;
            for(int i = 0 ; i < 4 ; i++)
            sort(arr[i] , 4) ;
            cout << "AFTER SORTING 2D ARRAY " << endl ;
             print(arr[0] , 4 , 4 ) ;

    return 0;
}