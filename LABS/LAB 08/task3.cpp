#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std ;
int main(){
    srand(time(0)) ;
    int arr[10] ;
    for(int i = 0 ; i < 10 ; i++){
        arr[i] = rand() % 100 ;
        cout << arr[i] << " " ;
    }
    cout << endl ;
    int count = 0 ;
    for(int i = 1 ; i < 10 ; i++){
        if(arr[i-1] <= arr[i] )
        count++ ;
    }
    cout << "Number of elements in order are " << count << endl ;
return 0 ;
}