#include<iostream>
using namespace std ;
int main(){ 
/* TIME DELAY FOR PROGRAMM 
 cout << "Sart of programm" << endl ;
 int x = INT_MAX /2  ;
 while(x--) ;
 cout << "End of programm  " ;
 */
/*
// FOR COUNTING NEGATIVE INPUT VALUES 
int i = 0 , x , count = 0 ;
while(i < 5){
    cin >> x ;
    if(x < 0 ) 
    count++ ;
    i++ ;
}
cout << "negative values are " << count << endl ;
*/
/*
// FOR COUNTING AVERAGE
int x , sum = 0  , count = 0 ;
cin >> x ;
while(x != -1){
    sum += x ;
    count++ ;
    cin >> x ;
}
cout << "Average is " << (float)sum / count << endl ;
*/
int x = 100000 ;
while(x--) ;
cout << x << endl ; // PRINTS -1
int x1 = 100000 ;
while(--x1) ;
cout << x1 ;  // PRINTS  0 
    return 0 ;
}