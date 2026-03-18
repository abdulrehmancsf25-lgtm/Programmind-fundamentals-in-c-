#include<iostream>
//#include<ctime>
//#include<cstdlib>
#include<cmath>
using namespace std ;
int main(){
   // srand(time(0)) ;
   unsigned  int x ;
   cin >> x ;
    cout << x << endl ;
    long long ans = 0 ;
    int i = 0 ;
 while((x != 0) ){
    int bit = x & 1 ;
    ans += (bit * pow(10, i)) ;
    x >>= 1 ;
    i++ ;
 }
 cout << ans ;
    return 0 ;
}