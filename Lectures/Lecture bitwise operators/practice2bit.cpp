/*
#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std ;
int main(){
    srand(time(0)) ;
    //cout << "Enter three digit number " << endl ;
    // to generate random numbers between 99 and 1000
  int  num =  (rand() % (999 - 100 + 1)) + 100 ;
  cout << "given number " << num << endl; 
    int num1 , num2   , num3 , num4 , num5 , num6 ;
    num1 = num ;
    int digit1 = num % 10 ;
    num = num / 10 ;
    int digit2 = num % 10 ;
    int digit3 = num / 10 ;
    // next possible combinations 
    num2 = (digit3 *100) + (digit1 * 10) + digit2 ;
    num3 = (digit1 * 100) + (digit2 * 10 ) + digit3 ;
    num4 = (digit1 * 100) + (digit3 * 10) + digit2 ;
    num5 = (digit2 * 100) + ( digit1 * 10)  + digit3 ;
    num6 = (digit2 * 100) + ( digit3 * 10)  + digit1 ;
    int max = -1 ;
    if(num1 > max)
    max = num1 ;
    if(num2 > max)
    max = num2 ;
    if(num3 > max)
    max = num3 ;
    if(num4 > max)
    max = num4 ;
    if(num5 > max)
    max = num5 ;
    if(num6 > max)
    max = num6 ;
    cout  << "Maximum  number is " << max << endl ;
    int min = 1000 ;
    if(num1 < min)
    min = num1 ;
    if(num2 < min)
    min = num2 ;
    if(num3 < min)
    min = num3 ;
    if(num4 < min)
    min = num4 ;
    if(num5 < min)
    min = num5 ;
    if(num6 < min)
    min = num6 ;
    cout << "Minimum Number is " << min << endl ;
    cout <<"Difference: " << (max - min) << endl ;
    return 0 ;
}*/
/*
#include<iostream>
using namespace std ;
int main(){
  int num ;
  cout << " Enter the number " << endl ;
  cin >> num ;
  if (((num & 7) == 0) && ((num & 3) == 0) && ((num & 1) == 0) ){
  cout << "Divisible by 8 " << endl ;
   cout << "Divisible by 4 " << endl ;
    cout << "Divisible by 2 " << endl ;
}
 else if (((num & 3) == 0) && ((num & 1 ) == 0)){
   cout << "Divisible by 4 " << endl ;
    cout << "Divisible by 2 " << endl ;
}
 else if ((num & 1) == 0){
    cout << "Divisible by 2 " << endl ;
}
else{
   cout << "Not divisible by 8 " << endl ;
   cout << "Not divisible by 4 " << endl ;
    cout << "Not divisible by 2 " << endl ;
}

  return 0 ;
}*/
/*
#include<iostream>
using namespace  std ;
int main(){
  char ch ;
  cout << "Enter the character " << endl ;
  cin >> ch ;
  char temp = ch ;
  ch = ch | 32 ;
  if ( (ch =='a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u')){
    cout <<  " is a vowel  " << endl;
  }
  else
  cout << temp << " is a consonant" << endl ;
  if(ch & 1 )
  cout << temp << " is odd " << endl ;
  else
  cout << temp << " is even " << endl ;
  return 0 ;
}*/
/*
#include<iostream>
using namespace std ;
int main(){
  int hours , minutes ;
  cout << "Enter hours : " << endl ;
  cin >> hours ;
  cout << " Enter minutes " << endl; 
  cin >> minutes ;
  int totalMin = (hours * 60) + minutes ;
  cout << "Total minutes : " << totalMin << endl ;
  if((hours >=5) && (hours <= 11))
  cout << "Time period: Morning " << endl ;
  else if ((hours >= 12 ) && (hours <= 16))
  cout << "Time period: Afternoon " << endl ;
  else if ((hours >=17) && (hours <= 20 ))
  cout << "Time period: Evening " << endl ;
  else 
  cout << "Time period: Night " << endl ;
    return 0 ;
}
    */
   /*
   #include<iostream>
   using namespace std ;
   int main(){
   int passCode , securityKey ;
   cout << "Enter the passcode " << endl ;
   cin >> passCode ;
   cout << "Enter the securitykey " << endl ;
   cin >> securityKey ;
   if((passCode >= 1000) && ( passCode <= 9999) ){
int digit1 , digit2 , digit3 , digit4 ;
digit4 = passCode % 10 ;
passCode /= 10 ;
digit3 = passCode % 10 ;
passCode /= 10 ;
digit2 = passCode % 10 ;
passCode /= 10 ;
digit1 = passCode ;
cout << digit1 << " " << digit2 << " " << digit3 << " " << digit4 << endl ;
//int sum = digit1 + digit2 ;
if (( (digit1 + digit2 & 1) == 0) && ((digit3 ^ digit4) != 0)  && (securityKey & 4 )){
  cout << "Access Granted " << endl ;
}
else
cout << "Access not granted " << endl ;
   }
else
cout << "Please enter 4-digit passcode " << endl ;

    return 0 ;
   } 
   */
 /* #include<iostream>
  using namespace std ;
  int main(){
    unsigned char a,b,c,z ;
     a = 7 ;
     b = 6 ;
     c = 3 ;
     z = (a << 5) | (b << 2) | c ;
     unsigned char a1 , b1 , c1 ;
     a1 = z >> 5 ;
     b1 = (z >> 2 ) & 7 ;
     c1 = z &  3 ;
     cout << (a1 * 1) << " " << (b1 * 1 ) << " " << (c1 * 1) << endl ;
     unsigned int a , b ,c , d ,a1 , b1 , c1;
     a = 65535 ;
     b = 4095 ;
     c = 10 ;
     d = (a << 16) | (b << 4 ) | c ;
a1 = d >> 16 ;
b1 = ((d << 16 ) >> 20 ) ;
c1 = d & 15 ;
cout  << a1 <<" " << b1 << " " << c1 << endl ;

    return 0 ;
  } */
#include<iostream>
using namespace std ;
int main(){
 // char ch = 'z' ;
  //char a = ch & 95 ;
  //cout << (ch * 1) << endl ;
  int x = 32 ;
  int y = 25 ;
  x = x^ y ;
  y =  x ^ y ;
  x = x ^ y ;
  cout << x << " " << y << endl ;
  return 0 ;
}
  