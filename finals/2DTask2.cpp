/*You are given a two-dimensional integer array of size 10 x 20, where each row represents the scores of a player
across 20 matches. The task is to write a function that sorts the rows of this array based on the average score
of each player. Specifically, the player with the highest average score should be moved to the top (first row),
and the player with the lowest average score should be placed at the bottom (last row). You are only required
to perform the sorting — no printing of the array is needed. */
#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
double  row_Avg(int arr[][20] , int rowNo , int size ){
             int sum = 0 ;
             for (int i = 0; i < size ;  i++) {
                      sum += arr[rowNo][i];
             }
    return ((double)sum /size ) ;
}
void swap_Row(int arr[][20] , int row1 , int row2 , int size ){
             for(int i = 0 ; i < size ; i++)
               swap(arr[row1][i] , arr[row2][i]) ;  
}
int main() {
                srand(time(0)) ;
           int arr[10][20] ;
           // input 
            for (int i = 0; i < 10; i++) {
                for (int j = 0; j < 20 ;  j++) {
                     arr[i][j] = rand() % 100 ;
                }
            } 
            // sorting 
              for(int i = 1 ; i < 10 ; i ++){
                 for(int j = 0 ; j < 10 - i  ; j++){
                    if(row_Avg(arr , j ,20) < row_Avg(arr , j+1 , 20 ))
                      swap_Row(arr, j , j+1 , 20) ;
                 }
              }
              
    return 0;
}