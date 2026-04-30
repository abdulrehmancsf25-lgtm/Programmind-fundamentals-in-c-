#include<iostream>
#include<fstream>
using namespace std ;
int main(){
               ofstream write("writefile.txt") ;
               write << "This my text file "<< endl ;
               write << "23 42  32 43 " << endl ;
               write << 1 << " " << 2 << " " << 3 << endl ;
               write.close() ;
        
    return 0 ;
}