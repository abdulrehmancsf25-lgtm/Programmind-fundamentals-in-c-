/*#include<iostream>
using namespace std ; 
int main(){
    int n1 , n2 ;
    cout<< "Enter the first number " << endl;
    cin >> n1 ;
    cout << "Enter the second  number " << endl;
    cin >> n2 ;
    cout <<"Addition: "<< n1 <<" + "<< n2 << " = " << n1+n2 << endl ; 
    cout << " Subtraction: " << n1 <<" - " << n2 << " = " << n1 - n2 << endl ;
    cout << "Multiplication: " << n1 << " * " << n2 << " = " << n1 * n1 << endl;
    cout << "Division: " << n1 << " / " << n2 << " = " <<  n1 / n2 << endl;
    cout << "Modulus: " << n1 << " % " << n2 << " = " << n1 % n2 << endl;
    return 0 ;
}*/
/*#include<iostream>
using namespace std ;
int main(){
    float Celsius  ;
    cout << "Enter Temperature value in Celsius " << endl;
    cin >> Celsius ;
    float Fahrenheit = (Celsius * 9/5) + 32 ;
    float Kelvin = Celsius + 273.15 ;
   cout << "Celsius:\t" << Celsius << endl;
   cout << "Fahrenheit:\t" << Fahrenheit << endl ;
   cout << "Kelvin\t\t" << Kelvin << endl ;
    return 0 ;
}*/
#include<iostream>
using namespace std ;
int main(){
        int p , t ;
        float r ;
        cout << "Enter Principal amount " << endl; 
        cin >> p ;
        cout << "Enter the rate " << endl ;
        cin >> r ;
        cout << "Enter the time period " << endl ;
        cin >> t ;
        float simpInterest = (p * r * t) / 100 ;
        cout << "Pricipal amount" << " = " << p <<endl ;
        cout << "Rate\t\t" << " = " << r << endl ;
        cout << "Time\t\t" << " = " << t << endl ;
        cout << "Simple Interest "  << " = " << simpInterest << endl ;
    return 0 ;
}