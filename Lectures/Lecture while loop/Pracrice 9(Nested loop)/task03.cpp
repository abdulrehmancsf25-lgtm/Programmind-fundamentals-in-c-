#include<iostream>
using namespace std ;
int main(){
        int rows = 3 , cols = 3  , i = 1 , j = 1 ;
        while(i <= rows){
        
            while(j <= cols){
               if(i==1 || i == rows ){
                cout << "*" ;
               }
               else{
                     if(j== 1 || j == cols)
                     cout << "*" ;
                     else 
                         cout << " " ;
               }
               j++ ;
            }
            cout << endl ;
           j = 1 ;


            i++ ;
        }



    return 0 ;
}