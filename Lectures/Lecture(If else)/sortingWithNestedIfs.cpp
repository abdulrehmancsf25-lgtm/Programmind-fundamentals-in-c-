#include<iostream>
using namespace std ;
int main(){
    int a , b , c ,d ;
    cout << "Enter the values " << endl ;
    cin >> a >> b >> c >> d ;
     if(a < b ){
                 if(b < c ){
                    if(c < d)
                              cout << a <<" " << b <<" " << c <<" " << d ;
                else if(b < d)
                              cout <<  a <<" " << b  << " " << d  <<" " << c  ;
                else if(a < d)
                             cout << a  <<" " << d  << " " <<  b <<" " << c  ;
                else
                            cout << d  <<" " << a  << " " << b  <<" " << c  ;
                 }
             else if(a < c) {
                     if(b < d)
                              cout << a  <<" " << c  << " " << b  <<" " << d  ;
                 else if(c < d)
                              cout << a  <<" " << c  << " " << d  <<" " << b  ;
                 else if(a < d)
                               cout << a  <<" " << d  << " " << c  <<" " << b  ;
                 else
                               cout <<  d <<" " << a  << " " <<  c <<" " << b  ;
             }
            else if(c < a){
                   if(b < d)
                            cout << c <<" " << a  << " " << b  <<" " << d  ;
              else if(a < d)
                            cout <<  c <<" " << a  << " " << d  <<" " << b  ;
              else if(c < d)
                            cout << c  <<" " << d  << " " << a <<" " << b  ;
             else
                            cout << d <<" " << c  << " " << a  <<" " << b  ;
            }

     }



   else{
          if(a < c){
                 if(c < d)
                              cout << b  <<" " << a  << " " << c  <<" " << d  ;     
                else if(a < d)
                              cout << b  <<" " <<  a << " " << d <<" " << c  ;
                else if(b < d)
                            cout << b  <<" " <<  d << " " << a <<" " << c  ;
                else
                              cout << d  <<" " <<  b << " " << a  <<" " << c  ;

          }
            else if(b < c){
                            if(a < d)
                                     cout << b  <<" " << c << " " << a <<" " << d  ;
                       else if(c < d)
                                     cout <<  b <<" " << c  << " " <<  d <<" " << a  ;
                       else if(b < d)
                                     cout << b  <<" " << d  << " " << c  <<" " << a  ;
                       else
                                    cout << d  <<" " << b  << " " << c <<" " << a ;

            }
            else if(c < b){
                            if(a < d)
                                     cout << c  <<" " << b  << " " <<  a <<" " << d  ;
                       else if(b < d)
                                     cout <<  c <<" " << b  << " " << d  <<" " << a ;
                       else if(c < d)
                                     cout << c  <<" " << d  << " " << b  <<" " << a  ;
                       else
                                    cout << d  <<" " << c << " " << b  <<" " << a  ;

            }

   }
    return 0 ;
}