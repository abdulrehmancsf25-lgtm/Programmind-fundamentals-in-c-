#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std ;
int main(){
    srand(time(0)) ;
    int arr[12] ;
     cout << "Monthly sales " ;
    for(int i = 0 ; i < 12 ; i++){
        arr[i] =(rand() % 101)+ 100 ;
        cout << arr[i] << " ";
    }
   
    
cout << endl ; 
cout << "Quarter Wise Sale : " << endl ;
cout << "Quarter 1: " ;
int sum1 = 0;
float  av1 ;
for(int i = 0 ; i <= 2 ; i++){
    cout << arr[i] << " " ;
    sum1 += arr[i] ;
}
av1 = sum1 / 3.0 ;
cout << "| Average : " << av1 ;
   cout << endl ;

   cout << "Quarter 2: " ;
int sum2 = 0 ;
float av2 ;
for(int i = 3 ; i <= 5 ; i++){
    cout << arr[i] << " " ;
    sum2 += arr[i] ;
}
av2 = sum2 /3.0 ;
cout << "| Average : " << av2 ;
   cout << endl ;

    cout << "Quarter 3: " ;
int sum3 = 0 ;
float av3 ; 
for(int i = 6 ; i <= 8 ; i++){
    cout << arr[i] << " " ;
    sum3 += arr[i] ;
}
av3 = sum3 / 3.0 ;
cout << "| Average : " << av3 ;
   cout << endl ;

  cout << "Quarter 4: " ;
int sum4 = 0 ;
float av4 ; 
for(int i = 9 ; i < 12 ; i++){
    cout << arr[i] << " " ;
    sum4 += arr[i] ;
}
av4 -= sum4 /3.0 ;
cout << "| Average : " <<  av4  ;
   cout << endl ;
   int maxim[4];
      maxim[0] = av1 ; maxim[1] = av2 ; maxim[2] = av3 ; maxim[3] = av4 ;
        int maxav = INT_MIN , minav  = INT_MAX ;
        for(int i = 0 ; i < 4 ; i++){
          if (maxim[i] > maxav )
          maxav = maxim[i] ;
          if(maxim[i] < minav)
          minav = maxim[i] ;
        }
        for(int i = 0 ; i <4 ; i++){
            if (maxav == maxim[i])
 cout << "Quarter with highest average:  Quater" << i << " "  << maxav  << endl ;
  if (minav == maxim[i])
 cout << "Quarter with highest average:  Quater" << i << " "  << minav << endl ;
        }
       
       
    return 0 ;
}