#include<iostream>
using namespace std ; 
int main(){
  /* int year ;
    cout << "Enter the year to be checked "<< endl;
    cin >> year ;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0 )){
        cout <<"Year " << year <<" is A leap year " << endl;
    }
    else{
         cout <<"Year " << year <<" is NOT a leap year " << endl;
    }*/
   /* int num ;
    cout << "Enter the number " << endl;
    cin >> num ;
    if((num & 1) && (num % 5 == 0) ){
        cout <<" number is odd and is multiple of 5 " ;
    }
   else if (num & 1 ){
        cout << " number is odd " ;
    }
    else if(((num & 1) == 0) && (num % 5 == 0)){
        cout << " number is even and is a multiple of 5 " ;
    }
    else{
        cout << " number is even " ;
    }*/
  /*  int num ;
    cin >> num ;
    if ((num < 10) || (num >=100) )
    cout << " Invalid number " ;
else{
    int mod = num  % 10 ;
    
    if((mod >= 0 ) && ( mod  <= 4))
    cout << num - mod ;
if ((mod >=5 ) && (mod <= 9))
cout << num + (10 - mod );
}*/
/*
string s1 ;
cout << " Enter the string "  << endl ;
cin >> s1 ;
if ( s1 == "red"){
    cout << " stop " << endl;
}
else if (s1 == "yellow"){
    cout << "Get ready " << endl; 
}
else{
    cout << "Go" << endl;
}
*/
/*
int a , b , c ;
cout << "Enter the first length for triangle " << endl;
cin >> a ;
cout << "Enter the second length for triangle " << endl;
cin >> b ;
cout << "Enter the third  length for triangle " << endl;
cin >> c ;
if ( ((a+b) > c) && ((a+c) > b) && ((b+c) > a ) ){

if (( a == b) && ( b == c )){
   cout << "Equilateral triangle " << endl;
}
else if ( ((a==b) && (b != c)) || ((a==c) && (c != b ))  || ((b==c) && (c != a )) )
{     cout << " Isosceles triangle " << endl ;}
else{
    cout << "Scalene triangle " << endl ;
}

}
else {
    cout << "Invalid sides for a triangle " ;
} */
 
    return 0 ;
}