#include<iostream>
using namespace std ; 
int main(){
    /*
   int x = 1, y = 2;
cout << (x && y++ || ++x) << '\n';
cout << x + y << '\n';
*/
/*
int x = 0, y = 3;
cout << (x || ++y && x++) << '\n';
cout << x * y << '\n';
*/
 //    cout << 5 + 2 * 2 ;
 /*
 int x = 2, y = 1;
cout << (x++ && y || ++x) << '\n';
cout << y - x << '\n';
*/



/*                        // VERY IMPORTANT
int x = 0, y = 4;
int result = (x++ || ++y && x);
cout << result << '\n';
cout << x + y + result << '\n';
*/


/*
int x = 0, y = 7;
cout << (x | y && y >> 1) << '\n';
cout << x + y << '\n';*/

// SECTION C
/*
int a = 4, b = 2;
if (a && b) a *= 2;
else b += 3;
cout << a + b << '\n';
*/

/*
int a = 6, b = 3;
if (a & b) a ^= b;
else b |= a;
cout << a + b << '\n';
*/
/*
int a = 5, b = 3, c = 7;
if (a & b) c >>= 1;
else c <<= 1;
cout << a + c << '\n';
*/ 


// SECTION D 
/*
double a = 2.5, b = 3.0;
if (a)
b += 2.5;
else
b *= 2;
cout << a + b << '\n';
*/

/*
double a = -2.0, b = 2.5, c = 7.0;
if (a || b)
c -= 2;
else
c += 3;
cout << a + c << '\n';*/
/*
double a = 3.0, b = 4.0, c = 1.5;
if (a && b)
c = c * 2;
else
b = b + c;
cout << a + b + c << '\n';
*/


unsigned char x = 1 ;
for(int i = 1 ; i <= 7 ; i++){
    x <<= 1 ;
    x |= 1 ;
}
cout << x * 1 << endl ;

char  y = 1 ;
y <<= 7 ;
cout << y  << endl ;

int n ;
cin >> n ;
if(n % 6 == 0){
cout << "Divisible by 6 " << endl ;
cout << "Divisible by 3 " << endl ;
}
else if(n % 3 == 0)
cout << "Divisible by 3 " << endl ;
else
cout << "Not divisible"<< endl ;
    return 0 ;
}