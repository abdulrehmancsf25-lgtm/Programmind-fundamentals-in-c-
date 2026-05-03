#include <iostream>
#include<fstream>
using namespace std;
ofstream write ;   // define globally 
void printstars(int n ) {
                           for(int i = 0 ; i< n ; i++)
                           write << "*" ;
    
}
void printSpaces(int n ){
                          for (int i = 0; i < n; i++) {
                            write << " " ;
                          }  
}
int main() {
               write.open("file2.txt") ;
             for(int i = 5 ; i>= 1 ; i--){
                printstars(i) ;
                write << endl ;
             }
             // new pattern
                  write << "New lower right triangle " << endl ;
            // start logic to print pattern
                for(int i = 4 , j = 1 ; i >= 0 , j <=5 ; i-- ,j++){
                     printSpaces(i) ;
                     printstars(j) ;
                     write << endl ;
                } 
            write.close() ;
    return 0;
}