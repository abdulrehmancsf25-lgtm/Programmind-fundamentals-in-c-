#include <iostream>
#include<fstream>
using namespace std;
 ofstream write ; 
 ifstream read ;
 void print_Stars(int n ){
        for(int i = 1 ; i<= n ; i++ )
        write  << '*' ;
 }
 void print_Spaces(int n ){
      for (int i = 0; i < n; i++) {
          write  << ' ' ;
      }
 }
int main() {
                   write.open("patternFile.txt") ;
              for(int i = 4 , j = 0  ; i >= 1 ; i--, j += 2 ){
                print_Stars(i) ;
                print_Spaces(j) ;
                print_Stars(i) ;
                write  << endl ;
              }
              for(int i = 2 , j = 4 ; i <=4 ; i++ , j-= 2 ){
                 print_Stars(i) ;
                print_Spaces(j) ;
                print_Stars(i) ;
                write << endl ;
              }
               write.flush();  // force buffers data to disk (may be use )
              write.close() ;
              // read procedure
              read.open("patternFile.txt") ;
              
              int num ;
              int line_Number = 0 ;
               while(1){
                if(read.eof())
                 break ;
                 line_Number ++ ;
                 if(  read >> num )
                 cout << num << endl ;
                 else{
                        cout << "Error ocurred " << endl ;
                        read.clear() ; // clear the error flags 
                        string line ; 
                        getline(read , line ) ;

                 }
                
               }
               cout << endl ;
             cout << "Total lines " << line_Number ;
             read.close() ;
    return 0;
}