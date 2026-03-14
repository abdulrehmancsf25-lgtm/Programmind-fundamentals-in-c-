/* #include<iostream>
using namespace std ;
int main(){
    int a = 105 , b= 120 , c = 145 ;
    cout << a <<'\t' ;
    for (int i = 1 ; i <= 5 ; i++ ){
        cout << a * i << '\t' ;
    }
    cout << '\n' ;
     cout << b <<'\t' ;
    for (int i = 1 ; i <= 5 ; i++ ){
        if ( i < 5){
        cout << b * i << '\t' ;}
        else{
            cout << "\t" << b*i ;
        }
    }
    cout << '\n' ;
     cout << c  <<'\t' ;
    for (int i = 1 ; i <= 5 ; i++ ){
         if ( i < 5){
        cout << c * i << '\t' ;}
        else{
            cout << "\t" << c*i ;
        }
    }
    cout << '\n' ;

    return 0 ;
}*/
/*#include<iostream>
using namespace std ;
int main(){
    for(int i = 1 ; i <= 5 ; i++){
        for (int j = 1 ; j <=i ; j++ ){
            if (j < 3 ){
                cout << '*' ;
            }
            else{
                cout << " " << '*' ;
            }
        }
        cout << "\n";
    }
    return 0 ;
}*/
/*#include<iostream>
#include<string>
using namespace std ;
int main(){
    string name ;
    cout << "Enter the name" << endl;
     getline(cin , name);
    string rollNo ;
    cout << " Enter then roll number" << endl;
   getline(cin , rollNo) ;
   string grade ;
   cout << " Enter the grade" << endl;
   getline(cin , grade) ;
   cout << "Name:" <<"\t\t" << name << endl;
   cout << "Roll No:" <<"\t" << rollNo << endl;
   cout << "Grade:"<< "\t\t" << grade << endl;
    return 0 ;
}*/
/*
#include<iostream>
#include<string>
using namespace std ;
int main(){
    int burgerQuantity ,FriesQuantity  ;
   float   burgerPrice = 24.98f ;
   float FriesPrice = 4.99f ;
   float Total = burgerPrice + FriesPrice ;
 cout << "Enter burger pieces " <<endl;
 cin >> burgerQuantity ;
 cout << "Enter the Fries buckets" <<endl;
 cin >> FriesQuantity ;
  cout << "Item\t" <<"Quantity" << " "<< "Price" << '\n' ;
cout << "Burger\t" << "   " << burgerQuantity <<'\t' <<" $" << burgerPrice <<'\n' ;
cout << "Fries\t" << "   " << FriesQuantity << '\t' << " $" << FriesPrice << '\n' ;
cout << "Total" << "\t\t " << "$" << Total << '\n' ;
    return 0 ;
}*/

