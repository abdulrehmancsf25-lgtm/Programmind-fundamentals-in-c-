/*Write a program to generate 5 random numbers in range 100. Find and print second highest
number:*/
#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std ;
int main()
{
    srand(time(0)) ;
  /* int num1 = rand() % 100 , num2 = rand() % 100 ,num3 = rand() % 100 , num4 = rand() % 100 , num5 = rand() % 100 ;    
     int  max = num1 , secMax = -1 ;
     
         if((num2 > max) && (num2 > secMax )){
          secMax = max ;
         max = num2 ;
         }
        else if ((num2 < max) && (num2 > secMax))
         secMax = num3 ;
           if((num3 > max) && (num3 > secMax )){
          secMax = max ;
         max = num3 ;
         }
        else if ((num3 < max) && (num3 > secMax))
         secMax = num3 ;
           if((num4 > max) && (num4 > secMax )){
          secMax = max ;
         max = num4 ;
         }
        else if ((num4 < max) && (num4 > secMax))
         secMax = num4 ;
           if((num5 > max) && (num5 > secMax )){
          secMax = max ;
         max = num5 ;
         }
        else if ((num5 < max) && (num5 > secMax))
         secMax = num5 ;
        
     cout << num1 << " " << num2 << " " << num3 <<" " << num4 << " " << num5 << endl ;
     cout <<  "Second maximum number is " <<  secMax ; */
     
       int i = 0 ,num , max = INT_MIN , secMax = -1 ;
       while( i < 5){
        num = rand() % 100 ;
        cout << num << " " ;
        if(num > max) {
        secMax = max ;
        max = num ;
        }
        else if((num < max ) && (num > secMax))
        secMax = num ;
        i++ ;
       }
       cout << endl ;
       cout << "Second maximum number is " << secMax << endl ;
return 0 ;
} 
