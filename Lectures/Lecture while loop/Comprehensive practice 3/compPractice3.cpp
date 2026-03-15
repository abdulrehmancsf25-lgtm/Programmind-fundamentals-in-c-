/*#include<iostream>
using namespace std ;
int main(){
    int n , sum = 0;
    cout << "Enter the number " << endl ;
    cin >> n ;
    int sq = n * n ;
    while(sq !=0 ){
        int digit = sq % 10 ;
        sum += digit ;
        sq /= 10 ;
    }
    if(sum ==n )
    cout << n << " is a neon number " << endl ;
    else 
    cout << n << " is not a neon number "<< endl ;
    return 0 ;
}*/
/*
#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout << "Enter the number " << endl ;
    cin >> n ;
    if(n % 10 == 7 )
    cout << n << " is a Buzz number " << endl ;
    else if (n % 7 == 0 )
       cout << n << " is a Buzz number " << endl ;
       else
       cout << n << " is a not Buzz number " << endl ;
    return 0 ;
}*/
/*
#include<iostream>
using namespace std ;
int main(){
    char ch1 , ch2 ;
    cin >> ch1 >> ch2 ;
    int i = ch2 - ch1 , j = 1;
     cout << ch1 << " ";
    while(i ){
             char ch3 = ch1 + j ;
             cout << ch3 << " " ;
     j++ ;
     i-- ;
    }
    return 0 ;
}*/
/*
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
     /*
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
*/