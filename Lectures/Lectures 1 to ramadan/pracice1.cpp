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
}*//*
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
}
*/
#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std ; 
int main(){
    srand(time(0)) ;
    int a = (rand() % (999 - 100 + 1)) + 100  , b = (rand() % (999 - 100 + 1)) + 100 , op = rand()  % 4 , score = 0 , uAns , cAns ;
      cout << "\t\t" << a << endl ;
      if(op  == 0 ){
        cout << "\t-\t" << b << endl ;
            cAns = a - b ;
      }
      else if (op == 1 ){
        cout << "\t+\t" << b << endl ;
        cAns = a + b ;
      }
      else if (op == 2){
        cout << "\t/\t" << b << endl ;
        cAns = a/b ;
      }
      else{
        cout << "\t*\t" << b << endl ;
        cAns = a * b ;
      }
      cout << "\t\t" ;
      cin >> uAns ;
      if (cAns == uAns){
      cout << "Correct Answer " << endl ;
      score++ ;
      cout << "Your score -> " << score ;
      }
      else{
        cout << "Wrong Answer " << endl ;
        cout << "Your score " <<  score << endl ;
      }
    return 0 ;
}