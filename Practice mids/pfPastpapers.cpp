#include<iostream>
#include<ctime>
#include<cstdlib>
#include<cmath>
using namespace std ;
int main(){
    /*
      char ch = 'A' ;
    for(int i = 0 ; i < 26 ; i++){
      cout << ch ;
      ch += 1 ;
      if( i & 1 )
      cout << "#" ;
      else
      cout << "*" ;
   cout << endl ;
    }
*/
/*
int x , theta ;
cin >> x ;
cin >> theta ;
int a , b ;
cin >> a >> b ;
float y ;
float numerator = sin(theta) + cos(theta) ;
float denominator = pow(a,x) * pow(b ,x) ;
 y = numerator / denominator ;
 cout << y ;
 */
double x;
    cout << "Enter value of x: ";
    cin >> x;

    double result = (2 * x*x*x*x + (x*x*x)) / (3*x*x);
    
    cout << "Result for x = " << x << ": " << result << endl;
    return 0 ;

}