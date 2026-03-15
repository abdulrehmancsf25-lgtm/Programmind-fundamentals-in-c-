#include<iostream>
using namespace std ;
int main(){
    /*
    //      QUESTION2 
    int i = 1 ;
    while(i < 100){
         if((i % 3 == 0) && (i % 5 == 0))
         i++ ;
      else if((i % 3 == 0) || (i % 5 == 0)) {
            cout << i << " " ;
            i++ ;
        }
        else 
        i++ ;
    }*/
   /*
   //   QUESTION 5
   int i = 1,   ans = 1 ;
   cout << i << " " ;
   while(i <= 10){
       ans += i ;
       cout << ans << " " ;
    i++ ;
   }
    */
   /*
   //        QUESTION 6
   int i = 1 , ans = i ;
   while(i <= 10){
    cout << ans << " " ;
    ans += ans ;
    i++ ;
   } */
  int x , ans1= 0 , ans2 = 0  , i = 0;
  while(i < 5){
    cout << "Input : " ;
     cin >> x ;
     ans1 += x ;
     int mod = x % 10 ;
     if (mod <=5 ){
        cout << "Output : " << (x - mod ) << endl ;
     ans2 += (x - mod ) ;
    }
     else {
      cout << "Output : " << (x + (10 - mod)) << endl ;
     ans2 += (x + (10 - mod )) ;
    }
    i++ ;
  }
  cout << "Sum of original numbeers : " <<  ans1 << endl ;
  cout << "Sum of Rounded Numbers : " << ans2 << endl ;
  if (ans1 > ans2)
  cout << "Difference : " << (ans1 - ans2) << endl ;
  else 
    cout << "Difference : " << (ans2 - ans1) << endl ;
    return 0 ;
}