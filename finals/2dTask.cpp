#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
void print_colum_Wise(int arr[] , int rows , int cols){
                for (int i = 0; i < rows ; i++) {
                    for (int j = 0; j < cols ; j++) {
                        cout << arr[cols * i +  j ] << " " ;
                        
                    }
                     cout << endl ;
                }
}
void column_Wise_Copy(int x[] , int y[] , int size ){
                int count = 0 , index = 0 ;
                for(int i = 0, j = 0  ; count <= 24 ; i+= 3 ,j++,count++){
                      if(i > 23 ){
                        index++ ;
                        i = index ;
                      }
                        
                    y[j] = x[i] ;
                    
                    
                }
}
void print(int arr[] , int size ){
       for(int i = 0 ; i< size ; i++)
         cout << arr[i]  << " " ;
        cout << endl ;
}
void input(int arr[] , int size ){
                       for(int i = 0 ; i < size ; i++){
                        arr[i] = rand() % 100 ;
                       }
}
int main() {
             srand(time(0)) ;
              int arr[8][3] , x[24] ;
            input(arr[0], 24 ) ;
            print_colum_Wise(arr[0] , 8 , 3) ;
    
            cout << "AFTER " << endl ;
            column_Wise_Copy(arr[0] , x , 24 );
            print(x , 24 ) ;

    return 0;
}