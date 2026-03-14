#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std ;
int main(){
srand(time(0)) ;
int a = rand()  , b = rand()  , c = rand() ;
cout << "a " << a << "  b " << b << "  c " << c << endl ;
if ((a > b)  && (a > c)){
    cout << " a is first " << endl ;
}
if((b > a) && ( b > c )){
    cout << " b is first " << endl;
}
if (( c > a )  && ( c > b )){
    cout << " c is first " << endl ;
}
if (((a > b) && (a < c))   || ( (a < b ) && ( a > c))) {
    cout << "a is second " << endl; 
}
if (((b > a) && ( b < c) ) || ((b < a) && ( b > c))){
    cout << " b is second " << endl ;
}
if(((c > a ) && ( c < b )) || ((c < a ) &&  ( c > b )) ){
    cout << " c is second " << endl ;
}
if ((a < b) && (a < c )) {
    cout << " a is third " ;
}
if ((b < a) && ( b < c))
cout << "b is third " ;
if((c < a ) && ( c < b))
cout << "c is third ";
    return 0 ;
}