#include<iostream>
using namespace std ;
int main(){
    //  PART A
    /*
    for (int i = 0 ; i < 5 ; i++){
        for(int j = 1 ; i + j < 5 ; j++){
            cout << " " ;
        }
        cout << "*" << endl ;
    }
    // PART B
    int num = 1 ;
        for (int i = 0 ; i < 5 ; i++){
        for(int j = 1 ; i + j < 5 ; j++){
            cout << " " ;
        }
        cout << num++ << endl ;
    }
*/
       for(int i = 0 ; i <= 3; i++){
        for(int j = 1 ; j <=i ; j++){
            cout << " ";
        }
         cout << "*" ;
    for (int j = 1 ; i+j <= 3 ; j++){
        cout << " " ;
    }
     for (int j = 1 ; i+j <= 3 ; j++){
        cout << " " ;
    }
 cout <<  "*" << endl ;
 
       }
    for (int i = 0 ; i <= 2 ;i++){
         for (int j = 1 ; i+j <= 2 ; j++){
        cout << " " ;
    }
    cout << "*" ;

      for(int j = 1 ; j <= i ; j++){
        cout << " " ;
      }
        for(int j = -1 ; j <= i ; j++){
        cout << " " ;
      }

     
cout << "*" <<  endl ;
    }
       





    return 0 ;
}