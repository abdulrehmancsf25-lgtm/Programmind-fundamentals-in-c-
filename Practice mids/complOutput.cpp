#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cmath>
using namespace std ;
int main(){
    /*
    int i = 1 , weight = 60 ;
    for(int j = 0 ; j < 5 ; j++){
        cout << i << "  " << weight << endl ;
         weight -= 3 ;
        if(weight & 1 )
          i += 9 ;
          else 
          i = 1 ;
    }
*/
/*
        int i = 1 , weight = 60 ;
    for(int j = 0 ; j < 5 ; j++){
        cout << i << "  " << weight << endl ;
         
        if(i == 1 )
          i = 10  ;
          else 
          i = 1 ;
          weight -= 3 ;
    }
    */
/*
    double a , b ;
    cout << "Enter a " ;
    cin >> a ;
    cout << "Enter b " ;
    cin >> b ;
    double y = (a * (a*a + b*b*b)) / (b*(a*a*a - b*b)) ;
    cout << y << endl ;
   */

   /*
         int x1,x2,x3,x4,y1,y2,y3,y4 ;
        cout << "Enter dimensions of A" ;
        cin >> x1  >> y1 ;

         cout << "Enter dimensions of B" ;
        cin >> x2  >> y2 ;
         cout << "Enter dimensions of C" ;
        cin >> x3  >> y3 ;
         cout << "Enter dimensions of D" ;
        cin >> x4  >> y4 ;
    double diagonal_AC , diagonal_BD ;
   diagonal_AC = sqrt(pow((x3-x1) , 2 ) + pow((y3 - y1) , 2)) ;
   
    diagonal_BD = sqrt(pow((x4-x2) , 2 ) + pow((y4 - y2) , 2)) ;
    cout << "Diagonal AC : " << diagonal_AC << endl ;
    cout << "Diagonal BD : " << diagonal_BD << endl ;
    cout << "Longer length " ;
    if(diagonal_AC > diagonal_BD)
    cout << diagonal_AC ;
    else if( diagonal_BD > diagonal_AC )
    cout << diagonal_BD ;
    else 
    cout << "   No one is longer " ;
*/           
srand(time(0)) ;
             int rating_S1 = rand() % 11 , rating_S2 = rand() % 11 , rating_S3 = rand() % 11 ;
             cout << rating_S1 << " " << rating_S2 << " " << rating_S3 << endl ;
      if ( rating_S1 > rating_S2 && rating_S1 > rating_S3)
       cout << "GO TO CAFEE 1 " << endl ;
       else if ( rating_S2 > rating_S1 && rating_S2 > rating_S3)
        cout << "GO TO CAFEE 2 " << endl ;
        else if ( rating_S3 > rating_S1 && rating_S3 > rating_S2)
          cout << "GO TO CAFEE 3 " << endl ;
            else 
        cout << "COMPARE MORE " ; 
          
    return 0 ;
}