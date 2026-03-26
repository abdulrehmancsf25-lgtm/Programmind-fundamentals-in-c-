/*3. Write a program to analyze a week's apple purchases by a shopkeeper. He purchased apples continuously for 7 days.
Input the purchase price for each day. For each day starting from the second day onward, calculate and display:
▪ Percentage increase or decrease compared to the previous day (starting from second day)
▪ Percentage increase or decrease compared to the first day (starting from third day, give both comparisons)
▪ For increase, print a + sign, and for decrease, print a – sign.
Sample Run:
Enter apple purchase price for Day 1: 100
Enter apple purchase price for Day 2: 120
Day 2 (vs Previous): +20
Enter apple purchase price for Day 3: 110
Day 3 (vs Previous): -8.33333
Day 3 (vs Day 1): +10
Enter apple purchase price for Day 4: 115
Day 4 (vs Previous): +4.54545
Day 4 (vs Day 1): +15*/
#include<iostream>
using namespace std ;
int main(){
   
    int purch_Price1 , purch_Price2  ,diff ,p1temp ;
    float  percent, percentTemp ;
    cout << "Enter purchase price of day 1 " ;
    cin >> purch_Price1 ;
    p1temp = purch_Price1 ;
   cout << endl ;
    for(int i = 2 ; i <= 7 ; i++){
        cout << "Enter purchase price of day "<< i << " "  ;
        cin >> purch_Price2 ;
    diff = purch_Price2 - purch_Price1 ;
      percent =  (diff * 100)/(purch_Price1 *1.0f) ;
      percentTemp = ((purch_Price2 - p1temp) * 100)/(p1temp * 1.0f) ;

    if(percent >= 0)
      cout << "Day " << i << "(vs Previous) : +" << percent << endl ;
      else
           cout << "Day " << i << "(vs Previous ) : " << percent << endl ;
      
        if(i >= 3 && percentTemp >= 0  )
        cout << "Day" << i << "(vs Day 1) : +" << percentTemp << endl ;
        else if(i >= 3 && percentTemp < 0)
         cout << "Day" << i << "(vs Day 1) : " << percentTemp << endl ;

      purch_Price1 = purch_Price2 ;
    }
     return 0 ;
}