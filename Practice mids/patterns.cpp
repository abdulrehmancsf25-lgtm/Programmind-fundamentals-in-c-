#include<iostream>
using namespace std ;
int main(){

/*
    for(int i= 0 ; i <= 4; i++){
        for(int j = 1 ; j <= 4 -i  ; j++){
           
            cout  << " " ;
        }
       // STARS 
       for(int j =1 ; j <= (i*2) + 1 ; j++ ){
        cout << "*" ;
       }
cout << endl ;
    }

    for(int i = 4 ; i >= 0 ; i--){
        for(int j= 1 ; j <= 4 - i ; j++){
            cout << " " ;
        }
        for(int j = 0 ; j < (i*2) +1 ; j++ ){
            cout << "*" ;
        }
        cout << endl ;
    }
        */
            /*
 ABCD        
A B C D     
A  B  C  D                 DRAW THE PATTERN 
A   B   C   D
Z   Y   X   W
Z  Y  X  W
Z Y X W
ZYXW     
*/
       int n ;
       cin >> n ;
       for(int i = 0 ; i < n*2 ; i++){
    char first = 'A' , second = 'Z' ;
          for(int j = 0 ; j < n ; j++){
            
if(i < n ){
    int space = i ;
     cout << first  ;
     while(space){
        cout << " " ;
        space -- ;
     }
     first += 1 ;
}
else {
      int space = (n*2) - i - 1 ;
      cout << second ;
      while(space){
        cout << " " ;
        space -- ;
      }
      second -= 1;
}
          }
   cout << endl ;

       }
   
  
    return 0 ;
}
