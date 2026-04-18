#include<iostream>
using namespace std ;
int main(){
          int marks , count = 0 , sum = 0  ;
          char option ;
    for(int i= 1 ; i <= 10 ; i++){
         cout << "Exam " << i << " : " ;
         cin >> option ;
        if(option == 'Y'){
            count ++ ;
            cout << "Marks : " ;
            cin >> marks ;
          sum += marks ;
        }
        else{

        }
         
    }
      cout << "Avg marks : " << sum / 10 << endl ;
     cout << "Avg maeks in appeared exams : " << sum / count << endl ;
    return 0 ;

}