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
    // SUM
    long long sum = 0 ;

    for(int i = 0 ; i <10 ; i++){
        sum += arr[i];
    }
    double avg = sum/(double)10 ;
    cout << " Average of array is " << avg << endl ;
    cout << "printing absolute diference of values from average : " << endl ;
    for(int i = 0 ; i < 10 ; i++ ){
        if(arr[i] > avg)
        cout << arr[i] - avg << " " ;
        else
        cout << avg - arr[i] << " ";
    }
    return 0 ;
}