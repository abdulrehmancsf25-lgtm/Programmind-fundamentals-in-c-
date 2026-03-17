#include<iostream>
#include<ctime>
#include<cstdlib>
#include<iomanip>
using namespace std ;
int main(){
    srand(time(0)) ;
     
    for(int i = 1 ; i <=5 ; i++){
        int maxi = INT_MIN , min = INT_MAX ;
        for(int j = 1 ; j <= 10 ; j++){
            int x = rand() % 100 ;
            cout << right ;
            cout << setw(2) << x << " " ;
            if(x > maxi)
            maxi = x ;
             if(x < min)
             min = x ;
        }
        cout << "Min : " << setw(2) << min << " " << "Max : " <<setw(2)<< maxi << endl ;

    }
    return 0 ;
}