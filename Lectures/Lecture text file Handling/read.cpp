#include <iostream>
#include<fstream>
using namespace std;
int main() {
              ifstream read("writefile.txt") ;
               string str ;
            /*
                 while(getline(read ,str))
                cout << str << endl ;
                read.close() ;
            */
               read >> str ;   // head   is  at this  
               cout << str ;
               read >> str ; // head move next to  is 
               cout << str ; 
                getline(read , str) ;
                cout << str << endl ;
            // complete read file
            while(getline(read , str)) 
            cout << str << endl ;

            read.close() ;
    return 0;
}