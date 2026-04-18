#include<iostream>
using namespace std ;
int main(){
       /**
     for(int i = 1 ; i <= 5 ; i++){
        char ch = 'A' ;
        for(int j = 1 ; j <= 5-i ; j++){
            cout << "  " ;
        }
         for(int k = 1 ; k <= i ; k++){
            cout << ch << " " ;
            ch += 1 ;
         }

       cout << endl ;
     }
       */
                  /*
             for(int i = 1; i <= 5 ; i++){

                for(int j= 1 ; j <= 5-i ; j++){
                    cout << " ";
                }
                cout << i << endl ;
             }       */

             /*
         for(int i = 0 ; i <= 4 ; i++){
           
            char ch = 'A'+ i ;
            for(int j = 0 ; j<= 4 ; j++){
                cout << ch << " " ;
                ch += 1 ;
            }
             cout << endl ;

         }     */

          /*
              for(int i = 1 ; i <= 4 ; i++){
                int num = 1 ;
                for(int j = 0 ; j<= 2 ; j++){
       
                      cout << num << " " ;
                      num += i ;

                }
                cout << endl ;
              }
                       */
/*
                       // UPPER X PATTERN 
                      int upper_spaces = 4 * 2 - 2 ; 
             for(int i = 1 ; i <= 4 ; i++){
                   
                for(int j = 1 ; j < i ; j++ ){
                    cout << " " ;
                }
                  cout << '*' ;
                for(int k = 1 ; k <= upper_spaces ; k++ ){
                    cout << " " ;
                }
                cout << '*' << endl ;
                 upper_spaces  -= 2 ;
             }          
           //    LOWER PART OF X
           int lower_spaces = 4 / 2 ;
           for(int i = 0 ; i <= 2 ; i++){
             
             for(int j = 1 ; j + i <= 2 ; j++){
                cout << " " ;
             }
          cout <<'*'  ;
                for(int j = 1 ; j <= lower_spaces ; j++ ){
                    cout << " " ;
                }
                  cout << '*' << endl ;
                       lower_spaces += 2;
           }
   */

                                  /*  
1      1
12    21
123  321           PATTERN 
12344321

for(int i = 1 ; i <= 4 ; i++){
    
    for(int j = 1 ; j<= i  ; j++){
        cout << j ;
    }
    
     for(int k = 1 ; k <= 8 - 2*i ; k++){
        cout << " " ;
     }

     for(int j = 1 ; j <= i ; j++){
        cout << (i-j +1) ;
     }
        cout << endl ;
}                */

      /*
1
01                   DRAW THE PATTERN 
101 
0101
10101
                int num ;
                for(int i = 1 ; i <= 5 ; i++){
                    if(i & 1)
                    num = 1 ;
                    else 
                    num = 0 ;
                
                for(int j = 1 ; j <= i ; j++){
                    cout << num ;
                     if(num == 1) 
                     num = 0 ;
                     else 
                     num = 1 ;
                }
                cout << endl ;
                }
    */
    return 0 ;

}