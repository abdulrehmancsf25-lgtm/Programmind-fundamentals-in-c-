#include<iostream>
#include<vector>
using namespace std ;
int main(){
    /*
                // COMPANY A 
             int sales  ;
             cin >> sales ;
                int fixSalary_A =30000 ;
                float  commision_A = 0.1 * sales  ;
                // COMPANY B 
                int fixSalary_B = 10000 ;
                float commision_B = 0.2 * sales ;
            float total_Earning_A = fixSalary_A + commision_A , total_Earning_B = fixSalary_B + commision_B;
              cout << total_Earning_A << endl ;
              cout << total_Earning_B << endl ;

              if(total_Earning_A > total_Earning_B)
              cout << "Go to company A " << endl ; 
              else 
              cout << "Go to company B " << endl ;

              */

              /*
               int x = -1982 , y = -2832 ;
               unsigned int num = (1 << 31 ) ;
               if( (num & y) ^ ( num & x ))
                cout << "Opposite signs  " ;
               else
               cout << "Same sign " ;      */
 
/*
               vector<int> arr ={3,-2,4,5 , 0} ;
                int bits_Required = 0 ;
                for(int i = 0 ; i < arr.size() ; i++){
                    if(arr[i] < 0 ){
                        bits_Required += 32 ;
                    }
                    else if (arr[i] == 0)
                       bits_Required ++ ;
                    else{
         while( arr[i] != 0 ){
                    bits_Required++ ;
                    arr[i] >>= 1 ;
         }
        }
                }

 cout << bits_Required ;
                             */
        
        int num ;
        cin >> num ;
        unsigned int x = num ;
       
        int arr [32] ;
        for(int i = 31 ; i >= 0 ; i--){
                arr[i] = (x & 1) ;
                 x >>= 1 ;
        }                     
        // PRINTING BEFORE
         for(int i = 1 ; i <= 32 ; i++){
    if(i % 4 == 0 )
        cout << arr[i-1] << " " ;
    
        else
        cout << arr[i-1] ;
   }
   cout << endl ;
        // SWAPPING 
        for(int i = 0 , j = 31 ; i < j ; i++ , j--){

               arr[i] = arr[i]^arr[j] ;
               arr[j] = arr[i]^arr[j] ;
               arr[i] = arr[i]^arr[j] ;

        }
        // PRINTING AFTER
   for(int i = 1 ; i <= 32 ; i++){
    if(i % 4 == 0 )
        cout << arr[i-1] << " " ;
    
        else
        cout << arr[i-1] ;
   }
    return 0 ;
}