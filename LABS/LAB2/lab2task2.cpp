#include<iostream>
using namespace std ;
int main(){
    int units , amount1 , amount2 , amount3 , amount4 ;
    int a , b ;
    cin >> units ;
    cout << "Units : " << units << endl ;
    int fixedCharges = 500 ;
    if (units > 300){
       amount4 = (units - 300 ) * 40 ;
       units = 300 ;
    }
    else{
        amount4 = 0 ;
    }
   if (units >= 200 ){
    if(units == 300){
         a = 300 - 200 ;

    }
    else
   {  a = units % 200 ;}
    amount3 = a * 30 ;
     units = units - a ;
   }
   
   if (units >= 100){
    if(units == 200){
         b = 200 - 100 ;
    }
    else{
     b = units % 200 ;
   }
   amount2 = b * 25 ;
   units = units - b ;
}

if(units >= 100){
    amount1= units * 20 ;

}
cout << "Amount on first  100 units \t" << ": \t" << units  << " * 20 = " << amount1 << endl ;
cout << "Amount on second  100 units \t" << ": \t" << b << " * 25 = " << amount2 << endl ;
cout << "Amount on third  100 units \t" << ": \t" << a <<" *  30 = " << amount3 << endl ;
//cout << "Amount on  next all  units \t" << ": \t" << amount4 << endl ;
 int total = amount1 + amount2 + amount3 + fixedCharges ;
 cout << "Fixed charges\t\t\t" <<":\t" << fixedCharges << endl ;
cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _" << endl ;
cout << "Total Amount \t \t\t" <<":\t\t" << total << endl ;
    return 0 ;
}