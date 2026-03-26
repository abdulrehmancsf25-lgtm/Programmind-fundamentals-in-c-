/*1. Write a program to analyze a week's apple purchases by a shopkeeper. He purchased apples continuously for 7 days.
Input the purchase price for each day. Calculate the percentage increase or decrease for each day compared to the
previous day, starting from the second day onward. For increase, print a + sign, and for decrease, print a – sign.
Sample Run:
Enter apple purchase price for Day 2: 120
Day 2: +20
Enter apple purchase price for Day 3: 110
Day 3: -8.33333
Enter apple purchase price for Day 4: 115
Day 4: +4.54545
Enter apple purchase price for Day 5: 115
Day 5: +0
Enter apple purchase price for Day 6: 105
Day 6: -8.69565
Enter apple purchase price for Day 7: 130
Day 7: +23.8095*/
#include<iostream>
using namespace std ;
int main(){
   
    int purch_Price1 , purch_Price2  ,diff ;
    float  percent;
    cout << "Enter purchase price of day 1 " ;
    cin >> purch_Price1 ;
   cout << endl ;
    for(int i = 2 ; i <= 7 ; i++){
        cout << "Enter purchase price of day "<< i << " "  ;
        cin >> purch_Price2 ;
    diff = purch_Price2 - purch_Price1 ;
      percent =  (diff * 100)/static_cast<float>(purch_Price1) ;

    if(percent >= 0)
      cout << "Day " << i << " : +" << percent << endl ;
      else
           cout << "Day " << i << " : " << percent << endl ;
    
      purch_Price1 = purch_Price2 ;
    }
     return 0 ;
}